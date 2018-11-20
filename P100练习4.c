#include <stdio.h>
#include <string.h>
main()
{ 
	char s1[80],s2[80];
	int i,len,len1,len2;
	printf("输入两行字符串：\n");
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
	printf("连接后的字符串为：\n");
	puts(s1);
}

/*#include <stdio.h>
#include <string.h>
main()
{ 
char s1[80],s2[80];
int i=0,j,n;
printf("输入两行字符串:\n");
gets(s1);
gets(s2);
n=strlen(s2);//测量s2的长度
while(s1[i])   i++;//通过判断s1的每个元素，找出结束符即’\0’的位置,为s2字符串开头字符的插入找好位置
for(j=0;j<n&&s2[j];j++)//控制s2所有字符从s1结束符’\0’的位置开始，逐一插入s1中
	{s1[i++]=s2[j];}
s1[i]='\0';//连接好后为s1补上结束符，否则会在后面输出乱码
puts("连接后的字符串为：");
puts(s1);
}*/

