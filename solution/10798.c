//2016.05.03
//https://www.acmicpc.net/problem/10798

#include <stdio.h>

int main(){
	char in[5][15] = {0,};

	for(int i = 0 ; i < 5 ; i ++)
		scanf("%s",in[i]);


	for(int i = 0 ; i < 15; i ++){
		for(int j = 0 ; j < 5; j++){
			if(in[j][i])
				printf("%c",in[j][i]);
		}
	}
		
	return 0;
}