#include <stdio.h>

int main()
{
    long a, b, c, m;
    scanf("%ld%ld%ld%ld",&a,&b,&c,&m);
    long result=1;
    while(b>0)
    {
        if(b% 2 ==1)
            result=result * a;
        a=a*a;
        b=b/2;
    }
    long ans1 = result % m;
    long ans2 = (1/c)%m;
    printf("%ld",ans1 * ans2);

    return 0;
}
