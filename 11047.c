//28.03.2016
//https://www.acmicpc.net/status/?user_id=gnujoow&problem_id=11047&from_mine=1
#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, value;
	int *coin;
	int cnt=0;

	scanf("%d %d",&N,&value);
	coin = (int *)calloc(N, sizeof(int));

	for(int i = 0 ; i < N ; i++)
		scanf("%d",&coin[i]);
	

	while(value != 0){
		if(value >= coin[N-1])
		{
			value = value - coin[N-1];
			cnt ++;
		}
		else{
			N = N-1;
		}
	}

	printf("%d\n",cnt);
	free(coin);
	return 0;
}