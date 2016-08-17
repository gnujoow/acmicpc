#include <iostream>
using namespace std;

int N;
int ret[100001] = {0,};
int podo[100001] = {0,};

int main(){
	cin >> N;
	for(int i = 1 ; i <= N ; i++)
		cin >> podo[i];

	ret[1] = podo[1];
	ret[2] = podo[2] + podo[1];

	for(int i = 3; i <= N ; i++){
		ret[i] = ret[i-1];
		
		if(ret[i] < ret[i-2] + podo[i])
			ret[i] = ret[i-2] + podo[i];
		if(ret[i] < ret[i-3] + podo[i] + podo[i-1])
			ret[i] = ret[i-3] + podo[i] + podo[i-1];
	} 

	printf("%d", ret[N]);
	return 0;
}