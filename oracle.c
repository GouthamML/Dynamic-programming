#include<stdio.h>
#include<limits.h>
int min(int y, int z)
{
   if (y < z)
      return y;
   else
      return z;
}

int minCost(int cost[20][20], int m, int n)
{
   if (n < 0 || m < 0)
      return INT_MAX;
   else if (m == 0 && n == 0)
      return cost[m][n];
   else
      return cost[m][n] + min(minCost(cost, m-1, n),minCost(cost, m, n-1) );
}


int main()
{
    int test_case,m,n,pos_m,pos_n;
    int cost[20][20];
     scanf("%d",&test_case);
     scanf("%d%d",&m,&n);
     scanf("%d%d",&pos_m,&pos_n);
          
   for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
             scanf("%d",&cost[i][j]);
   printf("%d",minCost(cost, pos_m-1, pos_n-1));
   return 0;
}