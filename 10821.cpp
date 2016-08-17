#include <cstdio>
#include <cstring>

int main(){
	char in[101];
	scanf("%s",in);

	int len = strlen(in);
	int ret = 1;
	for(int i = 0 ; i < len ; i++){
		if(in[i] == ',') ret ++;
	}
	printf("%d\n",ret);
	return 0;	
}