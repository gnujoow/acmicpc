//https://www.acmicpc.net/problem/2609
//최소 공배수 최대 공약수

#include <stdio.h>

int GCD(int a,int b);

int main(){

	int a, b;
	scanf("%d %d",&a,&b);
	int gcd = GCD(a, b);
	a = a/gcd;
	b = b/gcd;

	printf("%d\n%d\n",gcd, gcd*a*b);

	return 0;
}

int GCD(int a,int b)
{ //반복문을 이용한 방법
    int mod = a % b;
    while(mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}