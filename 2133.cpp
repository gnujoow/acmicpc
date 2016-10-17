#include <cstdio>

long long tile[33];
int n;

int main() {
	scanf("%d", &n);
	tile[0] = 1;

	for(int i = 2 ; i <= n ; i++){
		tile[i] = tile[i-2]*3;
		for(int j = 4; i-j>=0; j+=2)
			tile[i] = tile[i-j]*2;
	}
	printf("%llu\n",tile[n]);

	return 0;
}