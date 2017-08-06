#include<stdio.h>
#include<stdlib.h>
int min(int x,int y){
	return (x<y)?x:y ;
}
int conn[20];//connection list or adjancy list
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		int i;
		for(i=0;i<n;i++){
			conn[i]=(1<<i);
		}
		int u,v;
		for(i=0;i<m;i++){
			scanf("%d %d",&u,&v);
			conn[u-1]|=(1<<(v-1));//marking bit to 1 if it is joint with other no.s
			conn[v-1]|=(1<<(u-1));
		}
		int bitmask,ans=n;//initially ans=n because i can choose max no. of man = n
		for(bitmask=1;bitmask<(1<<n);bitmask++){//here bitmask in form of bits automatically generates all possible
		//pair of combination i,e 2^n;
		int num=0,count=0;//count is used to know how many min elements are required to set all bit to 1;
		for(i=0;i<n;i++){
			if(bitmask&(1<<i)){
				num|=conn[i];
				count++;
			}
		}
		if((num+1)==(1<<n)){
			ans=min(ans,count);
		}
	}
	printf("%d\n",ans);
}
return 0;
}  
