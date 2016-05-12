#include <stdio.h>
#include <string.h>

int main(){
	int len=10;
	char a[50] = {0,};
	scanf("%s",a);

	for(int i=1 ; i <strlen(a) ; i++){
		if(a[i] ^ a[i-1])
			len += 10;
		else
			len+=5;
	}

	printf("%d",len);

	return 0;
}