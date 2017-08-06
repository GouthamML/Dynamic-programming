#include<stdio.h>
int main()
{
int a[10],n,low,mid,high,key,i,flag=0;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter n numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key element to be searched\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
flag=1;
break;
}
else if(a[mid]<key)
{
low=mid+1;
flag=1;
break;


