#include <cstdio>
int arr[101][2]={0,};
int visit;

void go(int pos){
	if(arr[pos][1] == 1) return;
	
	arr[pos][1] = 1;
	visit++;

	return go(arr[pos][0]);
}

int main(){
	int N;
	scanf("%d",&N);
	for(int i =1 ; i <= N; i++){
		scanf("%d",&arr[i][0]);
	}

	int max=0;
	for(int i=1; i<=N ; i++){
		visit = 0;
		go(i);
		if(visit < max)
			max = visit;
	}

	printf("%d\n",max);
	return 0;
}