#include<stdio.h>
int main()
{
float kan,eng,hin,sci,mat,ss,avgmar;
printf("kan marks \n");
scanf("%f",&kan);
printf("eng marks \n");
scanf("%f",&eng);
printf("kan marks \n");
scanf("%f",&hin);
printf("kan marks \n");
scanf("%f",&mat);
printf("kan marks \n");
scanf("%f",&sci);
printf("kan marks \n");
scanf("%f",&ss);
avgmar=(kan+eng+hin+sci+ss+mat)/6;
printf("average marks :%f",avgmar);
if(avgmar<35 && avgmar >0)
printf("fail");
else if(avgmar<=40 && avgmar >35)
printf("c");
else if(avgmar<=50 && avgmar >40)
printf("c++");
else if(avgmar<=60 && avgmar >50)
printf("b");
else if(avgmar<=70 && avgmar >60)
printf("b++");
else if(avgmar<=80 && avgmar >70)
printf("a");
else if(avgmar<=100 && avgmar >80)
printf("a+");
else
printf("invalid input \n");
}



