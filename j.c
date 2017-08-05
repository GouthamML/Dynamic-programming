#include<stdio.h>
void quicksort(int x[],int first,int last)
{
int pivot,i,j,temp;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(x[i]<=x[pivot] && i<last)
{
i++;
}
while(x[j]>x[pivot])
{
j--;
}
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
quicksort(x,first,j-1);
quicksort(x,j+1,last);
}
}


int main(int argc,char *argv[])
{
int a[10],i,j,n;
printf("no \n");
scanf("%d",&n);
if(n>0)
{
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf("sorted");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}}
else
printf("invalid \n");

}

