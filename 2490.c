#include <stdio.h>

int main(){
	int temp=0;
	int in;
	char b[6]={'E','A','B','C','D'};
	for(int i = 0 ; i < 3; i++){
		in = 0;
		for(int j=0; j<4; j++){
			scanf("%d",&temp);
			
			if(temp == 0) in++;
		}

		printf("%c\n",b[in]);

	}
	return 0;
}