#include <cstdio>

int num[91][2] = {0,};
int N;
int main(){
	num[0][1] = 1;
	scanf("%d",&N);
	for(int i = 1 ; i <= N; i++){
		num[i][0] = (num[i-1][0] + num[i-1][1]);
		num[i][1] = num[i-1][0];
	}

	printf("%d\n",num[N][0] + num[N][1]);

	return 0;
}