#include <cstdio>

int main() {
	long long arr[81] = {1,1,};
	for(int i = 2 ; i < 81 ; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}

	int input;
	long long ret;
	scanf("%d",&input);
	if(input == 1) ret = 4;
	else {
		ret = (arr[input -1] + arr[input -1] + arr[input -2]) * 2;
	}
	printf("%lld\n", ret);
	
	return 0;
}