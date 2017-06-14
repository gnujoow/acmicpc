#include <stdio.h>

int main(){
	int num[9]={0,};
	
	for(int i=0; i < 9 ; i++)
		scanf("%d",&num[i]);

	int max=0, idx;
	for(int i = 0 ; i < 9 ; i++){
		if(num[i] > max){
			max = num[i];
			idx= i;
		}
	}

	printf("%d %d\n",max,idx+1);
	return 0;
}