#include<stdio.h>
#include<stdlib.h>
void main()
{
int l,s,b,t_sales,flag=0;
float com;
printf("enter the total number of locks\n");
scanf("%d",&l);
if((l<0)||(l>70))
flag=1;
printf("enter the total number of stocks\n");
scanf("%d",&s);
if((s<0)||(s>80))
flag=1;
printf("enter the total number of barrels\n");
scanf("%d",&b);
if((b<0)||(b>90))
flag=1;
if(flag==1)
{
printf("invalid input\n");
exit(0);
}
t_sales=l*45+s*30+b*25;
if(t_sales<=1000)
com=0.10*t_sales;
else if(t_sales<1800)
{
com=com+0.10*1000;
com=com+(0.15*(t_sales-1000));
}
else if(t_sales>1800)
{
com=com+0.10*1000;
com=com+(0.15*800);
com=com+(0.20*(t_sales-1800));
}
printf("total sales is %d,the commission is %f\n",t_sales,com);
}

