#include <cstdio>

int a[1001];
bool visit[1001];

void dfs(int node){
	if(visit[node] == true) return;
	visit[node] = true;
	dfs(a[node]);
}

int main(){
	int t; // test case
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = 1 ; i<= n ; i++){
			scanf("%d",&a[i]);
			visit[i]=false;
		}

		int ret=0;
		for(int i = 1 ; i <= n ; i++){
			if(visit[i]==false){
				dfs(i);
				ret ++;
			}
		}
		printf("%d\n",ret);
	}

	return 0;
}