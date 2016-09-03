#include <cstdio>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N, M;
		scanf("%d %d",&N,&M);
		int ret = 1;
		for(int i = 0; i < N ; i++){
			ret = ret*(M-i)/(i+1);
		}	
		printf("%d\n",ret);
	}
	return 0;
}