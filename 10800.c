//https://www.acmicpc.net/problem/10800
//2016.05.03

#include <stdio.h>



int main(){
	int size[200000]={0,};
	int clr[200000]={0,};
	int ret[200000]={0,};
	int N;

	scanf("%d",&N);
	for(int i = 0 ; i < N; i++)
		scanf("%d %d",&clr[i], &size[i]);
	
	for(int i = 0 ; i < N; i++){
		for(int j = i + 1; j < N ; j++){
			if(clr[i] != clr[j]){
				if(size[i]>size[j])
					ret[i] += size[j];
				else if(size[j]>size[i])
					ret[j] += size[i];
			}
		}
		printf("%d\n",ret[i]);
	}
	
	return 0;
}