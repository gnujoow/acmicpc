//https://www.acmicpc.net/submit/2309
//28.03.2016
#include <stdio.h>

int main(){
	int ppl[9]={0,};
	int total = 0;
	for(int i = 0 ; i  < 9 ; i++){
		scanf("%d",&ppl[i]);
		total += ppl[i];
	}
	total = total-100;

	int temp;
	for(int i = 0 ; i < 9 ; i++ ){
		for(int j = i + 1 ; j < 9 ; j++){
			if(ppl[i] > ppl[j]){
				temp = ppl[i];
				ppl[i] = ppl[j];
				ppl[j] = temp;
			}
		}
	}

	int out = 0;
	for(int i = 0 ; i < 9 ; i++ ){
		for(int j = i + 1 ; j < 9 ; j++){
			if(out == 1)
				break;
			if(total == ppl[i] + ppl[j]){
				ppl[i] = 0;
				ppl[j] = 0;
				out = 1;
			}
		}
	}

	for(int i = 0 ; i < 9 ; i++){
		if(ppl[i] != 0 )
			printf("%d\n",ppl[i]);
	}
	
	return 0;
}