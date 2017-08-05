#include<stdio.h>
#include<string.h>

// int i = 0;

int main() {
	int last_answer, n, test, type, x, y;
	int arr[10][10] = {0};
	scanf("%d%d",&n,&test );
	// int *arr = (int *)malloc(n * n * sizeof(int));
	while(test--){
		last_answer = 0;
		scanf("%d%d%d",&type,&x,&y);
		if(type == 1){
			int index = ((x^last_answer)%n);
			for(int i=0; i< n ; i++){
				if(arr[index][i] == 0){
					arr[index][i] = y;
				}
			}
			// arr[index][i++] = y;

		}
		else {
			int index = ((x^last_answer)%n);
			y = y%(strlen(arr[index]));
			last_answer = y;
			printf("%d\n",last_answer );

		}
	}
	for(int i=0;i,n;i++)
		for(int j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
	return 0;
}
