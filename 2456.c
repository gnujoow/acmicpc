#include <stdio.h>

int main(){
	int N;
	int cnd[3][4] = {0,};
	int vote[3]= {0,};

	scanf("%d",&N);

	for(int i = 0 ; i < N ; i++){
		scanf("%d %d %d",&vote[0],&vote[1],&vote[2]);

		for(int j = 0 ; j < 3 ; j ++)
			cnd[i][vote[i]] ++;
	}

	for(int i = 0 ; i < 3 ; i++)
		cnd[i][0] = (cnd[i][1]) + (cnd[i][2])*2 (cnd[i][3])*3;

	if(cnd[0][0] == cnd[1][0] || cnd[1][0] == cnd[2][0] || cnd[2][0] == cnd[0][0]){
		//총점이 같을때
	}
	else{
		//선출이 있을 때
	}

	return 0;
}