#include<stdio.h>
main()
{char c;
int zimu=0,shuzi=0,kongge=0,qita=0;
while((c=getchar())!='\n')
{
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		zimu++;
	else if(c>='0'&&c<='9')
		shuzi++;
	else if(c==' ')
		kongge++;
	else 
		qita++;
}
printf("��ĸ��%d�������֣�%d�����ո�%d���������ַ���%d��\n",zimu,shuzi,kongge,qita);
}