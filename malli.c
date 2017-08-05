#include <stdio.h>

int main()
{
    int i,j,cnt;
    char a[100];
    char array[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int  count[10] = {0};
    // printf("Enter numer \n");
    scanf("%s",a);
    
    for(i=0;i<10;i++)
    {
        
        cnt = 0;
        j=0;
    	while(a[j]!='\0')
    	{
        	// for(j=0;j<(strlen(a));j++)
        	if(a[j] == array[i])
        		{
            		cnt++;
        		}
        		j++;
        	// a=a/10;
    	}
    	// printf("%d",a[i]);
        count[i]=cnt;
        
    }
    // puts(count);
    
    for(i=0;i<10;i++)
    {
    	printf("%c %d\n",array[i],count[i]);
    }
    return 0;
}