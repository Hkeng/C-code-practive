#include<stdio.h>
main()
{
float x,y;
printf("������������룺");
scanf("%f",&x);
if(x<=800)  /*��1��if*/
  y=0;
else        /*��1��else*/
 {if(x<=2000)/*��2��if*/
  y=(x-800)*0.05;
else        /*��2��else*/
  {if(x<=8000)/*��3��if*/
  y=1200*0.05+(x-2000)*0.1;
else        /*��3��else*/
  y=1200*0.05+6000*0.1+(x-8000)*0.2;
  }
 }
printf("Ӧ��˰�%.2f\n",y);
}
