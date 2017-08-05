#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
// long long solve(int a[], int n);
int main() {
    int n,i;
    long long count, bits=0;
    long sum=0;
    scanf("%d", &n);
    int i_a;
    int *a = (int *)malloc(sizeof(int));
    int *b = (long *)malloc(sizeof(long));
    for(i_a=0; i_a<n; i_a++)
    	scanf("%d", &a[i_a]);

    for(i=0;i<n;i++){
    	count = 0;
	while(a[i])
  	{
    	count += a[i] & 1;
    	a[i] >>= 1;
  	}b[i]=count;

	}    
	for(i=0;i<n;i++){
		sum = sum + b[i];
	}
	printf("%ld",sum);
}

