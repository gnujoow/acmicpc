//https://www.acmicpc.net/problem/1100
#include <stdio.h>

int main()
{
	char board[9][9];
	int count = 0;
	for(int i = 0 ; i < 8 ; i++){
		scanf("%s",&board[i]);
	}

	for(int i=0; i<8; i++){
		for (int j = 0 ; j < 8 ; j++){
			if( (i+j)%2 == 0 && board[i][j] == 'F'){
				count ++;
			}
		}
	}

	printf("%d",count);
	return 0;
}