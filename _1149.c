#include <stdio.h>

int main(){
	int N;
	int sum = 0;
	int rgb[3];

	scanf("%d",&N);
	int idx = -1;

	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < 3 ; j++)
			scanf("%d",&rgb[j]);

		int temp = 500;
		for(int j =0 ; j < 3 ; j++){
			if( idx == j)
				continue;
			if (rgb[j] < temp){
				idx = j;
				temp = rgb[j];
			}
		}

		sum += temp;

	}

	printf("%d\n",sum);
	return 0;
}