#include <cstdio>

int main(){
	int c,r, order;
	int arr[1000][1000];
	scanf("%d %d %d",&c,&r,&order);

	int ppl = 1;
	int dir = 1;
	int i=-1,j=0;
	int col=c, row =r;

	while( c > 0 && r > 0 ){
		for(int p = 0 ; p < r ; p++ ){
			i += dir;
			arr[i][j] = ppl++;
		}
		r--;

		for(int p=0; p < c-1 ; p++){
			j += dir;
			arr[i][j] =ppl++;
		}
		c--;
		dir *= -1;
	}

	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			if(arr[i][j] == order){
				printf("%d %d\n",j+1,i+1);
				return 0;
			}
		}
	}
	printf("0\n");
	return 0;
}