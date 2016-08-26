#include <cstdio>
int check[1000000];
int times(int n, int p){
	int ret =1;
	for(int i = 0 ; i < p ; i++) 
		ret *= n; // n^p;

	return ret;
}

int next(int a, int p){
	int ret = 0;
	while(a > 0){
		ret += times(a%10, p);
		a /= 10;
	}
	return ret;
}

int length(int a, int p, int cnt){
	if(check[a] != 0) return check[a] - 1;
	check[a] = cnt;
	int b = next(a, p);

	return length(b, p, cnt+1);
}

int main() {
	int a,p;
	scanf("%d %d",&a,&p);
	printf("%d\n", length(a,p,1));

	return 0;
}