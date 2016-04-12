//https://www.acmicpc.net/problem/10162
//2016.04.10

#include <stdio.h>

int main()
{
	const int button[3] = {300,60,10};
	int push[3]={0,};
	int T;

	scanf("%d",&T);

	if(T%10 != 0){
		printf("%d",-1);
		return 0;
	}

	int idx = 0;
	while(T != 0){
		if(T >= button[idx]){
			T = T - button[idx];
			push[idx]++;
		}
		else
			idx++;
	}

	for(idx = 0 ; idx<3;idx++)
		printf("%d ",push[idx]);

	return 0;
}