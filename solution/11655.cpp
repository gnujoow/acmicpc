#include <cstdio>
#include <cstring>

int main(){
	char S[100];
	scanf("%[^\n]s",S);
	
	char up[26], down[26];
	for(int i = 0 ; i < 26 ; i++){
		up[i]='A'+i;
		down[i]='a'+i;
	}

	for(int i = 0 ; i < strlen(S) ; i++){
		if(S[i] >= 'a' && S[i] <= 'z'){//소문자
			S[i] = down[(S[i]-'a'+13)%26];
		}
		else if(S[i] >= 'A' && S[i] <= 'Z'){//대문자
			S[i] = up[(S[i]-'A'+13)%26];
		}
		printf("%c",S[i]);
	}
	printf("\n");

	return 0;
}
