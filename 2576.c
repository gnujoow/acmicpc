//2016.05.15
//https://www.acmicpc.net/problem/2576

#include <stdio.h>
int main(){
	int sum = 0;
	int min = 101;
	int temp;

	for(int i = 0 ; i < 7 ; i++){
		scanf("%d",&temp);

		if(temp%2 == 0 )continue;
		if(temp < min) min =temp;
		sum+=temp;
	}

	if(sum == 0) printf("-1\n");
	else printf("%d\n%d\n",sum,min);
	return 0;
}