#include <cstdio>
#include <cstring>

int main(){
	char in[101];
	scanf("%s",in);
	int len = strlen(in);

	printf("%c",in[0]);
	for(int i = 1 ; i < len ; i++){
		if(i%10 == 0)
			printf("\n");
		printf("%c",in[i]);
	}
	return 0;
}