//https://www.acmicpc.net/problem/1934
//2016.03.25
#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b);

int main(){
	int *a, *b, *result;
	int N = 0;

	scanf("%d",&N);

	a = (int *)calloc(N,sizeof(int));
	b = (int *)calloc(N,sizeof(int));
	result = (int *)calloc(N,sizeof(int));

	for(int i =0 ; i < N ; i++){
		scanf("%d %d",&a[i], &b[i]);
		result[i] = GCD(a[i], b[i]);
	}

	for(int i = 0 ; i <N ; i++)
		printf("%d\n", result[i]);

	free(a);free(b);free(result);
	return 0;
}

int GCD(int a,int b)
{ //반복문을 이용한 방법
    int mod = a % b;
    int temp_a = a;
    int temp_b = b;
    while(mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }

    return b * (temp_b /b ) * (temp_a / b) ;
}