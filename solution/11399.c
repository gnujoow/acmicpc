//29.03.2016
//https://www.acmicpc.net/problem/11399
#include <stdio.h>
#include <stdlib.h>

int main (){
	int N;
	int *que;
	scanf("%d",&N);
	que = (int *)calloc(N,sizeof(int));

	for(int i = 0 ; i < N ; i++)
		scanf("%d",&que[i]);

	//sort
	int temp;
	for(int i = 0 ; i < N ; i++){
		for(int j = i ; j < N ; j++){
			if(que[i] > que[j]){
				temp = que[i];
				que[i] = que[j];
				que[j] = temp;
			}
		}
	}

	//계산
	int time = 0;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < i + 1 ; j++){
			time += que[j];
		}
	}

	printf("%d",time);

	free(que);
	return 0;
}