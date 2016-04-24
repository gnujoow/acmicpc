//https://www.acmicpc.net/problem/2526
//2016.04.13
#include <stdio.h>

int N, P;
int i =0;
int check[100] ={0,};

int cal(int in){
	check[++i] = (in*N)%P;

	for(int j = i -1 ; j>0; j--){
		if(check[i] == check[j])
			return i-j;
	}

	return cal((in*N)%P);
}

int main (){
	scanf("%d %d",&N,&P);
	printf("%d",cal(N));
	check[0] = (N*N)%P;

	return 0;
}