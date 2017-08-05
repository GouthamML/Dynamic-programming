#include<stdio.h>
main()
{
int a,b,c;
printf("enter three sides of the triangle\n");
scanf("%d%d%d",&a,&b,&c);
if((a<b+c)&&(b<a+c)&&(c<a+b))
{
if((a==b)&&(b==c)&&(a==c))
printf("equilatrel triangle\n");
else if((a!=b)&&(b!=c)&&(a!=c))
printf("scalene triangle\n");
else
printf("isoceles triangle\n");
}
else
printf("triangle cannot be formed\n");
}
