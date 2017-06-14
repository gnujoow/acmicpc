#include <cstdio>

int main(){
	int n;
	scanf("%d",&n);
	if(n%400 == 0){
		printf("1\n");
	} else if(n%100 == 0){
		printf("0\n");
	} else if(n%4 == 0){
		printf("1\n");
	} else {
		printf("0\n");
	}
	return 0;
}