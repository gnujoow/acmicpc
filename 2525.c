// https://www.acmicpc.net/problem/2525
// 2016.04.13
#include <stdio.h>

int main(){
	int time[2] = {0,};
	int in;
	
	scanf("%d %d",&time[0],&time[1]);
	scanf("%d",&in);
	time[1] += in ;

	int temp;
	if(time[1] >= 60 ){
		temp = time[1] / 60;
		time[1] %= 60;
		time[0] += temp;
	}
	if(time[0] >= 24)
		time[0] -= 24;

	printf("%d %d",time[0], time[1]);

	return 0;
}