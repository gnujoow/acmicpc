#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int N, M;
	int num[500001]={0,};
	int temp;

	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&temp);
		num[i] = temp;
	}
	sort(num,num+N);

	scanf("%d",&M);
	for(int i = 0 ; i < M ; i++){
		scanf("%d",&temp);
		printf("%d ",binary_search(num,num+N,temp));
	}
	return 0;
}