//2016.05.15
//https://www.acmicpc.net/problem/1463

#include <stdio.h>
#include <stdlib.h>

int N; int *arr;

int check(int n)
{
	if( n == 1) return 0;
	if( arr[n] > 0) return arr[n];
	arr[n] = check(n-1) + 1;

	if(n % 2 == 0){
		int temp = check(n/2) + 1;
		if(arr[n] > temp) arr[n] =temp;
	}
	if(n % 3 == 0){
		int temp = check(n/3) + 1;
		if(arr[n] > temp) arr[n] = temp;
	}

	return arr[n];
}

int main()
{
  scanf("%d",&N);
  arr = (int *)calloc(N+1,sizeof(int));
  check(N);

  printf("%d",arr[N]);
  return 0;
}
