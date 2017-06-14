//더 빠른 방법이 있나 고민하기
#include <cstdio>

int N, tmp;
int num[10001];

int main(){
	int max =0;
	scanf("%d",&N);
	
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&tmp);
		num[tmp]++;
		if(max < tmp) max = tmp;
	}

	for(int i = 1 ; i <= max ; i++){
		while(num[i] != 0){
			printf("%d\n", i);
			num[i]--;
		} 
	}

	return 0;
}