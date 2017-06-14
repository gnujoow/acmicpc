//https://www.acmicpc.net/problem/2747
//2016.03.25
#include <stdio.h>

int main(){
	int a = 0;
	int fivo[45] = {0,};

	fivo[0] = 0;
	fivo[1] = 1;

	scanf("%d",&a);
	for (int i = 2 ; i <a+1 ; i++)
		fivo[i] = fivo[i-1] + fivo[i-2];

	printf("%d\n",fivo[a]);

	return 0;
}