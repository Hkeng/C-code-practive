#include<stdio.h>
#include<string.h>
void main()
{
	char s1[80],s2[80];
	int i,j,n=0,len1,len2;
	printf("���������ַ���\n");
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<len1;i++)
	{
		 for(j=0;j<len2;j++)
		 {
			 if(s2[j]!=s1[i+j])
				 break;
 		 }
		 if(j==len2)
		 {
			 n=i+1;
			 break;	
		 }
	}
	printf("�ַ���s2���ַ���s1�е�λ����%d\n",n);
}