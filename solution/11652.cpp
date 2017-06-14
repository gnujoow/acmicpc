#include <cstdio>
#include <algorithm>
using namespace std;

int N;
long long num[1000000];

int main() {
	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++)
		scanf("%lld", &num[i]);

	sort(num,num+N);

	int cnt = 0; 
	int max = 0;
	long long card;
	for(int i = 0 ; i < N -1 ; i++){
		if( num[i] == num[i+1])  cnt ++;
		else cnt = 0;
		if(max < cnt){ 
			max = cnt;
			card = num[i];
		}
	}

	printf("%lld\n",card);
	return 0;
}