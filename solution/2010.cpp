#include <cstdio>

int main(){
	int N;
	int temp;
	int sum = 0;
	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&temp);
		sum += temp;
	}

	printf("%d\n", sum-N+1);
	return 0;
}