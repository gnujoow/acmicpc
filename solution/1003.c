//2016.05.16
//https://www.acmicpc.net/problem/1003

#include <stdio.h>
#include <stdlib.h>

int memo[40] = {1,1,};

int fibonacci(int n){
	if ( n <= 1) return memo[n];
	else {
		if(memo[n] > 0) return memo[n];
	}
	return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
	int T; //testCase
	scanf("%d",&T);

	for(int i = 0 ; i < T ;i++){
		int temp;
		scanf("%d", &temp);
		
		if (temp == 0) printf("1 0\n");
		else if(temp == 1) printf("0 1\n");
		else{
			fibonacci(temp);
			printf("%d %d\n",memo[temp-2],memo[temp-1]);
		}
	}

	return 0;
}