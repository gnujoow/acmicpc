#include <cstdio>

long long memo[1000][1000];
int n, k;
const long long mod = 1000000000;

int main(){
	scanf("%d %d",&n,&k);
	memo[0][0]=1;
	
	for(int i = 1 ; i <= k ; i++){
		for(int j = 0 ; j < n+1 ; j++){
			for(int pre=0 ; pre < j+1 ; pre++){
				memo[i][j] += memo[i-1][j-pre];
				memo[i][j] %= mod;
			}
		}
	}
	printf("%llu\n", memo[k][n] );
	return 0;
}