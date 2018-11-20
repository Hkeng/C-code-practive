#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c=1,i,sum=0;
	printf("输入一个数：");
	scanf("%o",&a);
	a>>=1;
	b=a&1;
	sum+=b*pow(2,0);
	for(i=0;i<16;i++,i++)
	{
		a>>=2;
		b=a&1;
		sum+=b*pow(2,c++);
	}
	printf("取出奇数位后的数为：%o\n",sum);
}
/*#include<stdio.h>
 #include<stdlib.h>
 int main(){
      int value;
      int getodds(int value);
      printf("Input the value:");
     scanf("%o",&value);
 
     printf("The result is %o.",getodds(value));
 
     return EXIT_SUCCESS;
 } 
int getodds(int value){
     int result=0;
     int i;
     int t;
     for(i=0;i<8;i++)
     {
         t=1<<(2*i+1);
         result=result+((value&t)>>(i+1));
     }
     return result;
}*/