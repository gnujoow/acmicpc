//https://www.acmicpc.net/problem/2605
//2016.04.10

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	int *student;
	
	scanf("%d",&N);
	student = (int *)calloc(N,sizeof(int));

	for(int i = 0 ; i  < N ; i++)
	{
		int tck;
		int temp[2]={0,};
		scanf("%d",&tck);

		temp[0]=student[i-tck];
		for(int j = i ; j > i-tck  ; j--){
			student[j] = student[j-1];
		}

		student[i-tck] = i+1;
	}

	//출력해보기
	for(int k = 0 ; k <N ; k++)
		printf("%d ",student[k]);

	free(student);
	return 0;
}