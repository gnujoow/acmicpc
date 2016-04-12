//https://www.acmicpc.net/problem/4344
//2016.04.10
#include <stdio.h>
#include <stdlib.h>

int main(){
	int C; // test case
	int student[1000];

	scanf("%d",&C);
	for(int i = 0 ; i <C; i++){
		int num;
		scanf("%d",&num);

		int sum=0; // total
		for(int j= 0; j<num; j++){
			scanf("%d",&student[j]);
			sum += student[j];
		}

		float avg=0;//average
		avg = (float) sum / num;

		int ret=0;;
		for(int j = 0 ; j<num ; j++){
			if(student[j] > avg)
				ret++;
		}

		avg = (float)ret / (float)num;
		printf("%0.3f%%\n",avg*100);

	}

	return 0;
}