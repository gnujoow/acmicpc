#include <cstdio>

long long tile[1001]={0,};

int main(){

	int n;
	scanf("%d",&n);

	tile[0] = 1;
	tile[1] = 2;
	
	if(n>2){
		for(int i = 2 ; i < n ; i++)
		tile[i] = (tile[i-1] + tile[i-2])%10007;
	}

	printf("%llu\n",tile[n-1]);
	return 0;

}