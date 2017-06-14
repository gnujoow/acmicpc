#include <cstdio>

int main(){
	int N;
	int ret=0;
	int num;
	scanf("%d",&N);

	for(int i=0 ; i<N; i++){
		scanf("%1d",&num);
		ret += num;
	}

	printf("%d\n",ret);
	return 0;
}