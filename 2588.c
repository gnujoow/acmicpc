#include <stdio.h>

int main(){
	int a,b;
	int num[3];
	int ret = 0;

	scanf("%d %d",&a, &b);
	num[2] = b/100;
	num[1] = (b%100)/10;
	num[0] = b%10;

	int ten = 1;
	for(int i = 0 ; i < 3; i++){
		printf("%d \n",num[i]*a);
		ret += num[i]*a*ten;
		ten *= 10;
	}
	printf("%d",ret);

	return 0;
}