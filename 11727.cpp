#include <cstdio>
using namespace std;

int memo[1000]= {1,1,};
int N;

int main(){
	scanf("%d",&N);
	for(int i = 2; i <= N ; i++){
		memo[i]=(memo[i-2]*2 + memo[i-1])%10007;
	}

	printf("%d\n",memo[N]);

	return 0;
}