#include<stdio.h>
void main()
{
float I,m;
printf("输入当月利润：");
scanf("%f",&I);
if(I<=10)
m=I*0.1;
else {if(I<20)
m=10*0.1+(I-10)*0.75;
  else {if(I<40)
m=20*0.75+(I-20)*0.05;
   else {if(I<60)
m=40*0.05+(I-40)*0.03;
    else {if(I<100)
m=60*0.03+(I-60)*0.015;
	 else   if(I>100)
m=100*0.015+(I-100)*0.001;
         }	
		}       
       }  
	 }
printf("应发放奖金总数：%.2f万元\n",m); 	  
}