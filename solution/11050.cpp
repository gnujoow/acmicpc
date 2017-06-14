#include <cstdio>

int bino(int n, int k);

int main(){
	int N, K;
	scanf("%d %d",&N,&K);
	printf("%d",bino(N,K));
	return 0;
}

int bino(int n, int k){
	if(k==0 || n==k) return 1;
	return bino(n-1, k-1) + bino(n-1,k);
}
