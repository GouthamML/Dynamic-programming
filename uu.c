#include<stdio.h>
int main()
{
int a[10],flag=0,mid,low,high,i,n,key;
printf("enter the no of elements \n");
scanf("%d",&n);
if(n>0)
{
printf("enter the elements in ascending ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("key");
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
}
else 
{
high=mid-1;
}
}
if(flag==1)
printf("element found and element is at %d",mid+1);
else
printf("element not found \n");
}
else
printf("invalid key \n");
}
