#include<stdio.h>
#include<stdlib.h>
void main()
{
	void *p;
	int i=0;
	while((p=malloc(1024*1024)))
		i++;
	printf("%dKB\n",i);
	while(i>0)
	{
		free(p);
		i--;
	}
}