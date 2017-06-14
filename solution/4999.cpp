#include <cstdio>

char doc[1000]={0,};
char me[1000]={0,};
int d,m;

int main(){
	scanf("%s %s",doc,me);
	for(int i =0 ; i < 1000 ; i++){
		if(doc[i] == 'h') d = i;
		if(me[i] == 'h') m = i;
	}

	printf("%s\n", d >= m ? "go" : "no");
	return 0;
}