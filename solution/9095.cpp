#include <cstdio>

int N;
int memo[20]={1,};

int main(){
	int t;
	scanf("%d",&t);
	for (int i = 0 ; i < 20 ; i++){
		if(i>=1)memo[i] += memo[i-1];
		if (i >= 2) memo[i] += memo[i-2];
		if (i >= 3) memo[i] += memo[i-3];
		//printf("\t%d",memo[i]);
	}
	while(t--){
		scanf("%d",&N);
		printf("%d\n",memo[N]);
	}
	return 0;
}