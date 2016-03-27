//2016.03.26
//https://www.acmicpc.net/problem/1037
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
	int N;

	scanf("%d", &N);
	arr = (int *)calloc(N,sizeof(int));

	int min = 100000000;
	int max = 0;
	for(int i = 0 ; i < N ; i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}

	printf("%d\n",min*max);

	free(arr);

	return 0;
}