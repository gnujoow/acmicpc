//https://www.acmicpc.net/problem/2577
//27.03.2016

#include <stdio.h>

int main()
{
	int num[3] = {0,};
	int cnt[10] = {0,};
	int ret = 0;

	for(int i = 0; i < 3 ; i ++)
		scanf("%d",&num[i]);

	ret = num[0] * num[1] * num[2];

	while(ret != 0){
		cnt[ret%10] ++ ;
		ret = ret/10;
	}
	
	for(int i =0 ; i < 10; i++)
		printf("%d\n",cnt[i]);
	
	return 0;
}
