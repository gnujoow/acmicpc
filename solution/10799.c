//https://www.acmicpc.net/problem/10799
//2016.04.12

#include <stdio.h>
#include <string.h>

int main()
{
	char *in=0; 		// 문자열
	int ret = 0; 	// 결과값
	int sc = 0;		// 높이

	scanf("%s",in);

	for(int i = 0 ; i < strlen(in) ; i++){
		if(in[i] == '(')
			sc++;
		else{
			sc--;
			if(in[i-1] == '(' ){
				ret += sc;
			}
			else
				ret++;
		}
	}

	printf("%d",ret);
	return 0;
}
