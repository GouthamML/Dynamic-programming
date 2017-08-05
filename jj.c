#include<stdio.h>
#include<stdlib.h>
void main()
{
	int month[11]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,y,nm,ny,nd,ndays;
	printf("enter the d m y ");
	scanf("%d%d%d",&d,&m,&y);
	ndays=month[m-1];


	if(y<=1812 ||y>2012)
	{
		printf("invalid year \n");
		exit(1);
	}

if(m<1|| m>12)
{
printf("invalid month \n");
exit(0);
}

if(d<=0 || d>ndays)
{
printf("invalid day \n");
exit(1);
}

if(m==2)
{
	if((y%100==0) || (y%400==0))
	{
		ndays=29;
	}
else if((y%4==0) || (y%100!=0)){
	ndays=29;
	}
}
nd=d+1;
nm=m;
ny=y;




if(nd>ndays)
{
nd=1;
nm++;
}
if(m>12)
{
nm=1;
ny++;
}
printf("date==%d/%d/%d",d,m,y);
printf("next date  %d/%d/%d",nd,nm,ny);
}
