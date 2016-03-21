//https://www.acmicpc.net/problem/2475
#include <stdio.h>

int main(){
	int num[5];
	int check = 0;
	for (int i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&num[i]);
		check += num[i] * num[i];
	}

	printf("%d", check%10);


	return 0;
}
