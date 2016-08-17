#include <cstdio>
using namespace std;

long long num[101][10];
int N;
const long long mod = 1000000000;


int main(){
	scanf("%d",&N);
	
	for(int i = 1 ; i < 10 ; i++)
		num[1][i] = 1;

	for(int i = 2 ; i <= N ; i++){
		for(int j = 0 ; j < 10 ; j++ ){
			num[i][j] = 0;
			if (j-1 >= 0) {
                num[i][j] += num[i-1][j-1];
            }
            if (j+1 <= 9) {
                num[i][j] += num[i-1][j+1];
            }
            num[i][j] %= mod;
		}
	}

	long long ret = 0;
	for(int i = 0 ; i < 10 ; i++){
		ret += num[N][i];
	}

	printf("%llu\n", ret%=mod);

	return 0;
}