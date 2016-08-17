#include <cstdio>
#include <iostream>
using namespace std;

int cost[1001][3]={0,};
int val[1001][3]={0,};
int N;

int main(){
	scanf("%d",&N);
	
	for(int i=1; i <= N ; i++){
		scanf("%d %d %d",&cost[i][0],&cost[i][1],&cost[i][2]);
	}

	val[1][0] = cost[1][0];
	val[1][1] = cost[1][1];
	val[1][2] = cost[1][2];
	
	for(int i=2; i <= N ; i++){	
		val[i][0]=min(cost[i][0]+val[i-1][1], cost[i][0]+val[i-1][2]);
		val[i][1]=min(cost[i][1]+val[i-1][0], cost[i][1]+val[i-1][2]);
		val[i][2]=min(cost[i][2]+val[i-1][0], cost[i][2]+val[i-1][1]);
	}


	int ret = val[N][0];
	for(int i = 0 ; i < 3 ;i++){
		if(ret > val[N][i]) ret = val[N][i];
	}
	printf("%d\n",ret);
	return 0;
}