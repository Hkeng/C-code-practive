#include <stdio.h>
#include <string.h>
main()
{ 
	char s1[80],s2[80];
	int i,len,len1,len2;
	printf("���������ַ�����\n");
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	len=len1+len2;
	for(i=0;i<len;i++)
	{
		if(i<len1)
			s1[i]=s1[i];
		if(i>=len1&&i<len)
			s1[i]=s2[i-len1];
	}
	s1[i]='\0';
	printf("���Ӻ���ַ���Ϊ��\n");
	puts(s1);
}

/*#include <stdio.h>
#include <string.h>
main()
{ 
char s1[80],s2[80];
int i=0,j,n;
printf("���������ַ���:\n");
gets(s1);
gets(s2);
n=strlen(s2);//����s2�ĳ���
while(s1[i])   i++;//ͨ���ж�s1��ÿ��Ԫ�أ��ҳ�����������\0����λ��,Ϊs2�ַ�����ͷ�ַ��Ĳ����Һ�λ��
for(j=0;j<n&&s2[j];j++)//����s2�����ַ���s1��������\0����λ�ÿ�ʼ����һ����s1��
	{s1[i++]=s2[j];}
s1[i]='\0';//���Ӻú�Ϊs1���Ͻ�������������ں����������
puts("���Ӻ���ַ���Ϊ��");
puts(s1);
}*/

