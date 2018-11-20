#include<stdio.h>
main()
{int x,y,z,n=0;
for(z=0;z<=20;z++)
	{for(y=0;y<=50;y++)
		{for(x=0;x<=100;x++)
			{	if(x+2*y+5*z==100)
				{n++;
				printf("%d %d %d\n",x,y,z);
				}

			}
		}
	}printf("共%d种方法",n);
}