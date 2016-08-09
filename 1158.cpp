#include <cstdio>
#include <queue>
using namespace std;

int main(){
	int N, M;
	scanf("%d %d",&N,&M);

	queue<int>q;
	for(int i=1; i<=N ; i++)
		q.push(i);

	printf("<");
	for(int i = 0 ; i < N-1; i ++){
		for(int j = 0 ; j < M-1 ; j++){
			q.push(q.front());
			q.pop();
		}
		printf("%d, ",q.front());
		q.pop();
	}
	printf("%d>\n",q.front());	

	return 0;
}