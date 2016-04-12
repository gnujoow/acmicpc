#include <stdio.h>

int main(){
	unsigned int N;
	unsigned int ret = 1;

	scanf("%d",&N);

	for( ; N != 1 ; N --){
		ret *= N;
	}

	printf("%d\n", ret);
	return 0;
}