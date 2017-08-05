#include<stdio.h>
#include<malloc.h>
void main()
{
int n,i,d,count=0;
int *a = (int *)malloc(sizeof(int));
// printf("enter n ");
scanf("%d",&n);
// printf("enter array elements\n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
	if(a[i]<a[i-1])
	{
        d=a[i-1]-a[i];
        a[i]+=d;
        count+=d;
        count++;
	}

}
printf("%d\n",count);

}