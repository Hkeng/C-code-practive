#include<stdio.h>
void move(char a,char b)
{
	printf("%c¡ú%c\n",a, b);
}

void han(int n,char a,char b,char c)
{
	if(n>0)
	{
		han(n-1,a,c,b);
		move(a,b);
		han(n-1,c,b,a);
	}
}

void main()
{
	int n;
	printf("ÊäÈëËşÊı£º");
	scanf("%d",&n);
	han(n,'A','C','B');
}