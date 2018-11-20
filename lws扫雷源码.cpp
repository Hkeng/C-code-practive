#include<iostream>
#include<time.h>
using namespace std;

//������� ����һ�����ݵ��±�  Ȼ���ж����ǲ���ը�� ������� ��ӡ���� ���� ����ȥ����ǰ����
class Minesweep
{
public:
		Minesweep(int row,int col,int mine):m_row(row),m_col(col)
		{
			this->m_mine=0;						//Ĭ�ϵ�����Ϊ0
			this->c_sweep=NULL;					//������ָ����Ϊ�� ��ֹҰָ��Ĵ���  
			this->cpy_sweep = NULL;
			this->mystr = '0';
			this->minestr = '1';
			//ֱ�ӳ�ʼ����
			this->setmap();
			this->setsweep(mine);
			this->inputXY();
		}
		//�вεĹ��캯��

		void setmap()			//Ĭ�ϵĽ���ͼ��ʼ��Ϊ�ַ�0
		{		
			//֮������������ ��һ���������ж� һ��������ʾ
			if(this->c_sweep==NULL)	//����һ���ڴ�ռ� ��ά���� �������str�ַ�
			{
				c_sweep=new char*[m_row];//��ά���� �ȷ�����  ָ��m_row��Ԫ�ص�ָ��
				cpy_sweep = new char*[m_row];
				for(int i=0;i<m_row;i++)
				{
						c_sweep[i]=new char[m_col];//�ٷ���  ÿ������ָ��Ԫ�� ָ��ʮ���ڴ浥Ԫ
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
				cout<<"���ѷ����ڴ�  �޷���������"<<endl;
			}

		}
		//���õ�ͼ 
			void setsweep(int mine) //���õ��׸���   Ĭ�ϵĵ����ַ�Ϊ1
			{
				srand(time(NULL));//��ȡϵͳʱ��������������
					
				for(int i=0;i<mine;)//���ݵ��׸��� ��ѭ������
				{
						int x=rand()%9;  //������ʱ���� ��������x,y�±�
						int y=rand()%9;
					if(c_sweep[x][y]==mystr)
					{
						this->c_sweep[x][y]=minestr;
						i++;
					}
				}
			}			
		//���õ��׸���
			
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
		//��ӡ���صĵ�ͼ

		//��ӡ��ǰ�ĵ�ͼ
			void cpy_printmap(int &x, int &y)
			{
				for (int row = 0; row<m_row; row++)
				{
					for (int col = 0; col<m_col; col++)
					{
						if (x == row&&col == y) //��������±����ѭ������������±�
						{
							this->cpy_sweep[x][y] = '  ';
						}
						cout << this->cpy_sweep[row][col];
					}
					cout << endl;
				}
			}
			void setmystr(char str)  //���ð�ȫ���ַ�
			{
				this->mystr=str;
			}
			void setminestr(char str) //����  �����ַ�
			{	
				this->minestr=str;  
			}
			
		Minesweep(const Minesweep &ms); //�������캯��
		~Minesweep()//��������
		{
			if (c_sweep != NULL)
			{
				for (int i = 0; i < m_row; i++)
				{
					delete[]c_sweep[i];   //�Ȱ�ÿ��ָ����ָ�������
					delete[] cpy_sweep[i];

				}
				delete[]c_sweep;  //�ٰ�ָ�������ͷŵ�
				delete[]cpy_sweep;
			}
		}
		//��ӡ��ͼ
		
		bool isdie(int &x,int &y)  // ������� ������  ���򷵻ؼ�
		{
			if(c_sweep[x][y]==minestr)
			{
				return true;  //����������
			}
			else
			{
				return false;
			}
		}
		//�ж��Ƿ�����ը�� 

		void inputXY()
		{
			int x,y;
			bool select=true;
			
		while(select)
		{
				cout<<"��������Ҫ�����X,Y����"<<endl;
				cin>>x>>y;  //����x,y����
			if (x < m_row && y < m_col)
			{
				
				if(isdie(x,y))
				{
					cout<<"�㱻ը���� GAME OVER"<<endl;
					this->printmap();
					select=false;
				}
				else
				{
					system("cls");
					cpy_printmap(x, y);
					cout<<"��û��"<<endl;
				}

			}
			else
			{
				cout << "�������λ�ò�����" << endl;
			}

		}
			
		}
private:
	const int m_row;//��
	const int m_col;//��
	int m_mine;//������

	char mystr;//��ȫ���ַ�
	char minestr;//�����ַ�
	char **c_sweep;//����ָ���൱��һ����ά����	
	char **cpy_sweep;//��һ�ְ�ȫ�� Ȼ�����ɨ��ʱһһ��ӡ 
};

int main()
{
	Minesweep ms1(10,10,20);//ʵ����һ������  ��ջ��
	//ms1.setmap();// ���ó�ʼ������  
	//ms1.setsweep(10);//���õ���   ���ٸ����׸��ݴ����ȥ�� ��������
	//ms1.printmap();//��ӡ����
	system("pause");
	return 0;
}