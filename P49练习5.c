#include<stdio.h>
main()
{/*int s,i;
	 s=1;
	 for(i=9;i>=1;i--)
	 {s=2*(s+1);
	 }
	 printf("第一天有%d个桃子。\n",s);*/

		/*i=9;
		s=1;
		do{s=(s+1)*2;
	printf("第%d天有%d个桃子\n",i,s);
	i--;
	}while(i>=1);*/


	int x,y=1;
	for(x=9;x>=1;x--)
	{
	y=(y+1)*2;
	}
	printf("第一天共有%d个桃子\n",y);
}