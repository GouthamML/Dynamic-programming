#include<stdlib.h>
#include<stdio.h>
void main()
{
int m,d,y,nm,nd,ny,ndays;
int month[11]={31,28,31,30,31,30,31,31,30,31,30,31};
printf("enter day month year\n");
scanf("%d %d %d",&d,&m,&y);
ndays=month[m-1];
if((y<1812)||(y>2012))
{
printf("invalid input\n");
exit(0);
}
if((m<1)||(m>12))
{
printf("invalid input\n");
exit(0);
}


if(m==2)
{
	if(y%100==0 && y%400==0)
 	{
		ndays=29;

	}

	else if(y%100!=0 && y%4==0)
		ndays=29;
}
if((d<1)||(d>ndays))
{
printf("invalid input\n");
exit(0);
}
nd=d+1;
nm=m;
ny=y;
if(nd>ndays)
{
nd=1;
nm++;
}
if(nm>12)
{
nm=1;
ny++;
}
printf("given date is %d/%d/%d\n",d,m,y);
printf("next date is %d/%d/%d\n",nd,nm,ny);
}

