#include <stdio.h>

int main(){
	int N;
	int memo[100001] = {0,};
	int podo[100001] = {0,};

	scanf("%d",&N);
	for(int i = 1 ; i <= N; i++)
		scanf("%d",&podo[i]);
	
	memo[1] = podo[1];
	memo[2] = podo[1] + podo[2];


	for(int i = 3; i <= N ; i++){
		memo[i] = memo[i-1];

		if(memo[i] < memo[i-2] + podo[i])
			memo[i] = memo[i-2] + podo[i];
		if(memo[i] < memo[i-3] + podo[i] + podo[i-1])
			memo[i] = memo[i-3] + podo[i] + podo[i-1];
	}

	printf("%d\n",memo[N]);
	return 0;
}