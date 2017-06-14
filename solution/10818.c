//https://www.acmicpc.net/problem/10818
//27.03.2016

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	int max = -1000000;
	int min = 1000000;
	int *arr;

	scanf("%d",&N);

	arr =(int *)calloc(N,sizeof(int));
	
	for(int i =0 ;i < N ; i++){
		scanf("%d",&arr[i]);
		if (arr[i] > max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}

	printf("%d %d",min,max);

	free(arr);
	return 0;
}