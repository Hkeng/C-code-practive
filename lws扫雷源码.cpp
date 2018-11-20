#include<iostream>
#include<time.h>
using namespace std;

//如何做到 输入一个数据的下标  然后判断其是不是炸弹 如果不是 打印雷区 出来 并且去掉当前坐标
class Minesweep
{
public:
		Minesweep(int row,int col,int mine):m_row(row),m_col(col)
		{
			this->m_mine=0;						//默认的雷数为0
			this->c_sweep=NULL;					//将二级指针置为空 防止野指针的存在  
			this->cpy_sweep = NULL;
			this->mystr = '0';
			this->minestr = '1';
			//直接初始化吧
			this->setmap();
			this->setsweep(mine);
			this->inputXY();
		}
		//有参的构造函数

		void setmap()			//默认的将地图初始化为字符0
		{		
			//之所以申请两个 是一份是用来判定 一份用来显示
			if(this->c_sweep==NULL)	//分配一段内存空间 二维数组 用来存放str字符
			{
				c_sweep=new char*[m_row];//二维数组 先分配行  指向m_row个元素的指针
				cpy_sweep = new char*[m_row];
				for(int i=0;i<m_row;i++)
				{
						c_sweep[i]=new char[m_col];//再分配  每个数组指针元素 指向十个内存单元
						cpy_sweep[i] = new char[m_col];
				}
				for(int row=0;row<m_row;row++)
				{
					for(int col=0;col<m_col;col++)
					{
						c_sweep[row][col]=mystr;
						cpy_sweep[row][col] = mystr;
					}
				}
			}
			

			else
			{
				cout<<"你已分配内存  无法继续分配"<<endl;
			}

		}
		//设置地图 
			void setsweep(int mine) //设置地雷个数   默认的地雷字符为1
			{
				srand(time(NULL));//获取系统时间产生随机数种子
					
				for(int i=0;i<mine;)//根据地雷个数 做循环条件
				{
						int x=rand()%9;  //定义临时变量 存放随机的x,y下标
						int y=rand()%9;
					if(c_sweep[x][y]==mystr)
					{
						this->c_sweep[x][y]=minestr;
						i++;
					}
				}
			}			
		//设置地雷个数
			
			void printmap()  
			{
				for(int row=0;row<m_row;row++)
				{
					for(int col=0;col<m_col;col++)
					{
						cout<<this->c_sweep[row][col];
					}
					cout<<endl;
				}
			}
		//打印隐藏的地图

		//打印当前的地图
			void cpy_printmap(int &x, int &y)
			{
				for (int row = 0; row<m_row; row++)
				{
					for (int col = 0; col<m_col; col++)
					{
						if (x == row&&col == y) //如果数组下标等于循环输出的行列下标
						{
							this->cpy_sweep[x][y] = '  ';
						}
						cout << this->cpy_sweep[row][col];
					}
					cout << endl;
				}
			}
			void setmystr(char str)  //设置安全区字符
			{
				this->mystr=str;
			}
			void setminestr(char str) //设置  地雷字符
			{	
				this->minestr=str;  
			}
			
		Minesweep(const Minesweep &ms); //拷贝构造函数
		~Minesweep()//析构函数
		{
			if (c_sweep != NULL)
			{
				for (int i = 0; i < m_row; i++)
				{
					delete[]c_sweep[i];   //先把每个指针所指向的数组
					delete[] cpy_sweep[i];

				}
				delete[]c_sweep;  //再把指针数组释放掉
				delete[]cpy_sweep;
			}
		}
		//打印地图
		
		bool isdie(int &x,int &y)  // 如果死了 返回真  否则返回假
		{
			if(c_sweep[x][y]==minestr)
			{
				return true;  //死亡返回真
			}
			else
			{
				return false;
			}
		}
		//判断是否遇到炸弹 

		void inputXY()
		{
			int x,y;
			bool select=true;
			
		while(select)
		{
				cout<<"请输入你要点击的X,Y坐标"<<endl;
				cin>>x>>y;  //输入x,y坐标
			if (x < m_row && y < m_col)
			{
				
				if(isdie(x,y))
				{
					cout<<"你被炸死了 GAME OVER"<<endl;
					this->printmap();
					select=false;
				}
				else
				{
					system("cls");
					cpy_printmap(x, y);
					cout<<"你没事"<<endl;
				}

			}
			else
			{
				cout << "您输入的位置不存在" << endl;
			}

		}
			
		}
private:
	const int m_row;//行
	const int m_col;//列
	int m_mine;//地雷数

	char mystr;//安全区字符
	char minestr;//雷区字符
	char **c_sweep;//二级指针相当于一个二维数组	
	char **cpy_sweep;//做一分安全区 然后进行扫雷时一一打印 
};

int main()
{
	Minesweep ms1(10,10,20);//实例化一个对象  在栈区
	//ms1.setmap();// 设置初始化雷区  
	//ms1.setsweep(10);//设置地雷   多少个地雷根据传入进去的 参数决定
	//ms1.printmap();//打印雷区
	system("pause");
	return 0;
}