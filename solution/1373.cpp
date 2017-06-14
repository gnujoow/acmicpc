#include <cstdio>

int toint(int num){
	int ret = 0;
	for(int i = 0 ; num != 0 ; i++){
		ret += (num%10)<<i;
		num /= 10;
	}
	return ret;
}

int main(){
	int num;
	scanf("%d",&num);
	printf("%o\n",toint(num));

	return 0;
}