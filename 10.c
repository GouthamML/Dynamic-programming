#include<stdio.h>
void main()
{
float kan,eng,hin,mat,sc,sst,avg;
printf("letter grading\n");
printf("sslc mark grading\n");
printf("enter the marks for kannada\n");
scanf("%f",&kan);
printf("enter the marks for english\n");
scanf("%f",&eng);
printf("enter the marks for hindi\n");
scanf("%f",&hin);
printf("enter the marks for science\n");
scanf("%f",&sc);
printf("enter the marks for social studies\n");
scanf("%f",&sst);
printf("enter the marks for mathematics\n");
scanf("%f",&mat);
avg=(kan+eng+hin+mat+sc+sst)/6.25;
printf("average marks are:%f\n",avg);
if((avg<35)&&(avg>0))
printf("fail\n");
else 
if((avg<=40)&&(avg>35))
printf("grade c\n");
else 
if((avg<=50)&&(avg>40))
printf("grade c+\n");
else 
if((avg<=60)&&(avg>50))
printf("grade b\n");
else
 if((avg<=70)&&(avg>60))
printf("grade b+\n");
else 
if((avg<=80)&&(avg>70))
printf("grade a\n");
else 
if((avg<=100)&&(avg>80))
printf("grade a+\n");
}
