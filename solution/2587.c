#include <stdio.h>

int main(){
	int num[5] ={0,};
	int sum = 0;
	
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d",&num[i]);
		sum+= num[i];
	}

	int temp = 0;
	for(int i = 0 ; i < 5 ;i++){
		for(int j = 0 ; j <5 ; j++){
			if(num[i] > num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d %d",sum/5, num[3]);
	return 0;
}