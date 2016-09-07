#include <cstdio>
#include <cstring>

int main(){
	char in[102];
	scanf("%[^\n]s",in);

	int len = strlen(in);
	int j=0;
	for(int i = 0 ; in[i] ;){
		putchar(in[i]);
		if(in[i] == 'a'||in[i]=='e'||in[i]=='i'||in[i]=='o'||in[i]=='u')
			i+=3;
		else
			i++;
	}

	return 0;
}