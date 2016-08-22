#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int N, M;
	int num[500001]={0,};
	int arr[20000001];
	const int offset = 10000000;
	int temp;

	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&temp);
		arr[temp+offset] = true;
	}

	for(int i = 0 ; i < 10 ; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}