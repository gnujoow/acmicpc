//https://www.acmicpc.net/problem/2455
#include <stdio.h>

int main(){
	int train=0;
	int in = 0, out = 0;
	int max = 0;

	for(int i = 0 ; i < 4 ; i ++){
		scanf("%d %d",&out,&in);
		train -= out;
		train += in;

		if(max < train)
			max = train;
	}
	printf("%d", max);

	return 0 ;
}