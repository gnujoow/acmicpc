#include <cstdio>
#include <algorithm>
using namespace std;

#define PAIR pair <int, int>

int N;
PAIR arr [100000];


inline bool cmpx(PAIR p1, PAIR p2){
	return p1.first < p2.first;
}

inline bool cmpy(PAIR p1, PAIR p2){
	return p1.second < p2.second;
}

int main(){
	scanf("%d",&N);

	int x,y;
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d",&x,&y);
		arr[i] = make_pair(x,y);
	}

	stable_sort(arr,arr+N, cmpy);
	stable_sort(arr,arr+N, cmpx);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].first, arr[i].second);

	return 0;
}