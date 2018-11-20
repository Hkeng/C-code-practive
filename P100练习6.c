#include<stdio.h>
#include<string.h>
void main()
{
	char s1[80],s2[80];
	int i,j,n=0,len1,len2;
	printf("输入两行字符串\n");
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
	printf("字符串s2在字符串s1中的位置是%d\n",n);
}