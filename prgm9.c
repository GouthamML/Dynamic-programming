#include<stdio.h>
void quick(int x[10],int first,int last)
{
int temp,pivot,i,j;
if(first<last)
{
pivot=first;
i=first;j=last;
while(i<j)
{
while(x[i]<=x[pivot] && i<last)
{
i++;}
while(x[j]>x[pivot])
j--;

if(i<j)
{
temp=x[i];
x[i]=x[j];
x[j]=temp;

}
}
temp=x[pivot];
x[pivot]=x[j];
x[j]=temp;
quick(x,first,j-1);
quick(x,j+1,last);
}}
int main(int argc,char *argv[])
{
int n,a[10],i;
printf("enter n val:  \n");
scanf("%d",&n);
if(n>0)
{
printf("enter eklements:  \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quick(a,0,n-1);
printf("sorted liast: \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
else
printf("error");
return 0;
}
