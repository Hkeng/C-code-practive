#include<stdio.h>
main()
{float x,y;
printf("������������룺");
scanf("%f",&x);
if(x<=2000)     /*��1��if*/
  {if(x<=800)
  y=0;
    else
  y=(x-800)*0.05;
  }
else            /*��1��else*/
    {if(x<=8000)
	     y=1200*0.05+(x-2000)*0.1;
      else
        y=1200*0.05+6000*0.1+(x-8000)*0.2;
     }
printf("Ӧ��˰��:%.2f\n",y);
}