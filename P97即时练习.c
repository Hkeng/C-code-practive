#include<stdio.h>
#include<string.h>
void main()
{
	char s[30],c1[30],c2[30];
	int i=0,j=0,k=0;
	printf("输入一字符串:\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='*')
		{c1[j]=s[i];j++;}
		else
		{c2[k]=s[i];k++;}
	}
	c1[j]='\0';c2[k]='\0';
	strcat(c1,c2);
	printf("移动后输出：\n%s\n",c1);
}