//https://www.acmicpc.net/problem/2443

#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);

	for(int i = 0 ; i< N; i++){
		for(int j =0 ; j < 2*N -1 ; j++){
			if( i > j){
				printf(" ");
			}
			else if(j < 2*N - i -1)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}