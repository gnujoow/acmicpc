#include <stdio.h>
#include <string.h>

int main(){
	char letters['z'-'a'+1]={0,};
	char S[100];

	scanf("%s",S);
	for(int i =0 ; i < strlen(S) ; i++)
		letters[S[i]-'a']++;

	for(int i = 0 ; i < 'z'-'a'+1 ; i++){
		printf("%d ",letters[i]);
	}
	return 0;
}