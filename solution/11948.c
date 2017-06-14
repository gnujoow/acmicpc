//https://www.acmicpc.net/problem/11948#
//2016.04.14

#include <stdio.h>

int main (){
	int subject[6] ={0,};
	
	int temp = 100;
	int idx;
	for(int i = 0 ; i < 4 ; i++){
		scanf("%d",&subject[i]);
		if(subject[i] < temp){
			temp = subject[i];
			idx = i;
		}
	}
	subject[idx] = 0;

	temp = 100;
	for(int i = 4 ; i < 6 ; i++){
		scanf("%d",&subject[i]);
		if(subject[i] < temp){
			temp = subject[i];
			idx = i;
		}
	}
	subject[idx] = 0;

	int ret = 0;
	for(int i = 0 ; i<6; i++)
		ret += subject[i];

	printf("%d",ret);
	return 0;
}