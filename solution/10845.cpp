#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

int main(){
	queue<int> Q;
	int N;
	scanf("%d",&N);

	while(N--){
		char cmd[10];
		scanf(" %s",cmd);

		if(!strcmp(cmd,"push")){
			int val;
			scanf("%d",&val);
			Q.push(val);
		}
		else if(!strcmp(cmd,"pop")){
			if(Q.empty()) printf("-1\n");
			else{
				printf("%d\n",Q.front());
				Q.pop();
			}
		}
		else if(!strcmp(cmd,"size")){
			printf("%lu\n",Q.size());
		}
		else if(!strcmp(cmd,"empty")){
			printf("%d\n",Q.empty());
		}
		else if(!strcmp(cmd,"front")){
			if(Q.empty())printf("-1\n");
			else printf("%d\n",Q.front());
		}
		else if(!strcmp(cmd,"back")){
			if(Q.empty())printf("-1\n");
			else printf("%d\n",Q.back());
		}

	}
	return 0;
}
