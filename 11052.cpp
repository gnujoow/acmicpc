#include <cstdio>
#include <iostream>
using namespace std;

int p[1001]={0,}; // 가격
int r[1001]={0,}; // 리턴
int N;

int main() {
	scanf("%d",&N);
	for(int i = 1 ; i <= N ; i++)
		scanf("%d",&p[i]);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= i ; j ++){
			r[i] = max(r[i],r[i-j]+p[j]);
		}
	}

	printf("%d\n",r[N]);

	return 0;
}