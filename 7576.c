#include <stdio.h>

int queue[1000][2];
int top = 0 ,bott = -1;

void pop(){
	
}

void push(int x, int y){
	queue[top++][0] = x;
	queue[top++][1] = y;

}

int main (){
	int M, N;
	int tomato[1002][1002] = {0,};

	scanf("%d %d",&M,&N);
	for(int i = 1 ; i < M + 1; i++){
		for(int j = 1 ; j < N +1 ; j++){
			scanf("%d", &tomato[i][j]);
			
			if(tomato[i][j] == 1){

			}
		}
	}

/*
	for(int i = 1 ; i < M + 1; i++){
		for(int j = 1 ; j < N +1 ; j++){
			printf("%d", tomato[i][j]);
		}
		printf("\n");
	}
*/
	return 0;
}