#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef struct People{
	string name;
	int guk;
	int young;
	int su;
}ppl;

int N;
ppl arr[100000];


inline bool cmp_guk(ppl p1, ppl p2);
inline bool cmp_young(ppl p1, ppl p2);
inline bool cmp_su(ppl p1, ppl p2);
inline bool cmp_name(ppl p1, ppl p2);

int main(){
	cin >> N;
	for(int i = 0 ; i < N ; i++)
		cin >> arr[i].name >> arr[i].guk >> arr[i].young >> arr[i].su;

	stable_sort(arr,arr+N, cmp_name);
	stable_sort(arr,arr+N, cmp_su);
	stable_sort(arr,arr+N, cmp_young);
	stable_sort(arr,arr+N, cmp_guk);


	for(int i = 0 ; i < N ; i++)
		cout << arr[i].name <<'\n';

	return 0;
}

inline bool cmp_guk(ppl p1, ppl p2){
	return p1.guk > p2.guk;
}
inline bool cmp_young(ppl p1, ppl p2){
	return p1.young < p2.young;
}
inline bool cmp_su(ppl p1, ppl p2){
	return p1.su > p2.su;
}
inline bool cmp_name(ppl p1, ppl p2){
	return p1.name.compare(p2.name) < 0;
}
