#include<stdio.h>
#define I 10
#define J 80
main()
{
	char c[I][J];
	int dx=0,xx=0,sz=0,kg=0,qt=0,i,j;
	for(i=0;i<I;i++)
		for(j=0;(c[i][j]=getchar())!='\n';j++)
		{
			if(c[i][j]>='0'&&c[i][j]<='9')
			sz++;
			else if(c[i][j]>='A'&&c[i][j]<='Z')
			dx++;
			else if(c[i][j]>='a'&&c[i][j]<='z')
			xx++;
			else if(c[i][j]==' ')
			kg++;
			else
			qt++;
		}
		printf("��д��ĸ:%d��,Сд��ĸ:%d��,����:%d��,�ո�:%d��,����:%d��\n",dx,xx,sz,kg,qt);
}