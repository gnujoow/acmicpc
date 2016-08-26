#include <cstdio>

const int chess[6] ={1,1,2,2,2,8};
int main(){
	int temp;
	for(int i = 0 ; i < 6 ; i++){
		scanf("%d",&temp);
		printf("%d ",chess[i]-temp);
	}

	return 0;
}