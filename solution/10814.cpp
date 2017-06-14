#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#define PAIR pair <int, string>
using namespace std;

int N;
PAIR arr[100000];

inline bool cmp(PAIR p1, PAIR p2){
	return p1.first < p2.first;
}

int main(){
	cin >> N;
	int age; 
	string name;
	for(int i = 0 ; i < N ; i++){
		cin>> age >> name;
		arr[i] = make_pair(age,name);
	}
	stable_sort(arr,arr+N, cmp);

	for(int i = 0 ; i < N ; i++)
		cout<<arr[i].first<<" "<<arr[i].second<<'\n';

	return 0;
}