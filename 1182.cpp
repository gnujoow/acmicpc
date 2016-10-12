#include <cstdio>
int n, s;
int num[20];

int ret = 0;

void go(int i, int sum){
	if(i == n){
		if( sum == s) ret ++;
		return;
	}

	go(i+1, sum + num[i]);
	go(i+1, sum);
}

int main() {
	scanf("%d %d",&n,&s);
	for(int i = 0 ; i < n ; i++)
		scanf("%d", &num[i]);

	go(0,0);
	if(s == 0) ret--;
	printf("%d\n", ret);
	return 0;
}