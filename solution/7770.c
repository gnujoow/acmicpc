//https://www.acmicpc.net/contest/problem/153/6
//2016.04.14
#include <stdio.h>

int main (){
	int N;
	scanf("%d",&N);
	
	int i = 1;
	int temp = 0;
	while(temp <= N){
		temp += (2*i*i -2*i +1);
		i++;
	}

	printf("%d\n",i-2);

	return 0;
}