#include <stdio.h>
#include <string.h>

int main(){
	char letters['z'-'a'+1];
	memset(letters,-1,sizeof(char)*('z'-'a'+1));
	

	char S[100];
	scanf("%s",S);

	for(int i =0 ; i < strlen(S) ; i++){
		if(letters[S[i]-'a'] == -1)
			letters[S[i]-'a'] = i;
	}

	for(int i = 0 ; i < 'z'-'a'+1 ; i++)
		printf("%d ",letters[i]);

	printf("\n");

	return 0;
}