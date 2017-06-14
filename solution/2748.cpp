#include <cstdio>
long long fivo[100];
int main(){
	fivo[0] = 0; fivo[1] = 1;
	int N;
	scanf("%d",&N);
	for(int i = 2 ; i <= N ; i++){
		fivo[i] = fivo[i-1] + fivo[i-2];
	}
	printf("%lld\n",fivo[N]);
	return 0;
}