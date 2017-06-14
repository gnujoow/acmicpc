#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector <long long> rope;

int main(){
	scanf("%d",&N);
	
	for(int i = 0 ; i < N ; i++){
		long long temp;
		scanf("%llu", &temp);
		rope.push_back(temp);
	}
	
	sort(rope.begin(), rope.end());

	int t = N;
	long long max = 0;
	for(int i = 0 ; i < N ; i++){
		rope[i] *= t;
		t--;
		if(max < rope[i]) max = rope[i];
	}
	printf("%llu\n",max);
	return 0;
}