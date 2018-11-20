#include<stdio.h>
main()
{
float x,y;
printf("请输入个人收入：");
scanf("%f",&x);
if(x<=800)  /*第1层if*/
  y=0;
else        /*第1层else*/
 {if(x<=2000)/*第2层if*/
  y=(x-800)*0.05;
else        /*第2层else*/
  {if(x<=8000)/*第3层if*/
  y=1200*0.05+(x-2000)*0.1;
else        /*第3层else*/
  y=1200*0.05+6000*0.1+(x-8000)*0.2;
  }
 }
printf("应收税款：%.2f\n",y);
}
