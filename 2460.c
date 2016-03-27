//https://www.acmicpc.net/problem/2460
//27.03.2016

#include <stdio.h>

int main(){
	int train = 0;
	int max = 0;
	int in, out;

	for(int i = 0 ; i < 10; i++){
		scanf("%d %d",&out,&in);
		train -= out;
		train += in;

		if(max < train)
			max = train;
	}

	printf("%d",max);
	return 0;
}
