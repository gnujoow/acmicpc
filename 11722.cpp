#include <cstdio>

int num[1000]={0,};
int len[1000]={0,};
int N;

int main(){	
	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++)
		scanf("%d",num[i]);

	int max;
	len[0] = 1;
	for(int i = 0 ; i < N ; i++){
		max = num[i];
		for(int j = i + 1 ; j < N ; j++){
			if(max > num[j]){
				
			}
		}
	}
	return 0;
}