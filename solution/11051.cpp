#include <cstdio>

int bino(int n, int k);
int memo[1001][1001];

int main(){
	int N, K;
	scanf("%d %d",&N,&K);
	printf("%d",bino(N,K));
	return 0;
}

int bino(int n, int k){
	if(k==0 || n==k) return 1;
	if(memo[n][k] != 0) return memo[n][k];
	memo[n][k] = (bino(n-1, k-1) + bino(n-1,k))%10007;
	return memo[n][k];
}
