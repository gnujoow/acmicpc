#include <cstdio>

long long koong(int n);
long long num[77];

int main(){
	num[0]=1;
	num[1]=1;
	num[2]=2;
	num[3]=4;
	
	int n,t;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		printf("%llu\n",koong(n));
	}
	
	return 0;
}

long long koong(int n){
	if(num[n] != 0)return num[n];
	num[n] = koong(n-1)+koong(n-2)+koong(n-3)+koong(n-4);
	return num[n];
}