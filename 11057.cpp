#include <cstdio>

int main(){
	int N;
	long long num[1001][10] = {0,};
	const int mod =  10007;

	scanf("%d",&N);
	for(int i = 0 ; i < 10 ; i ++)
		num[1][i] = 1;

	for(int i=2 ; i <= N ; i++){
		for(int j = 0 ; j < 10 ; j++){
			for (int k=0; k<=j; k++) {
				num[i][j] += num[i-1][k];
				num[i][j] %= mod;
			}
		}
	}

	long long ret=0;
	for(int i = 0 ; i <= 10 ; i ++)
		ret += num[N][i];
	
	ret %= mod;

	printf("%llu",ret%mod);

	return 0;
}