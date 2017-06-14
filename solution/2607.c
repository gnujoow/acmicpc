//https://www.acmicpc.net/problem/2607
//2016.04.10

#include <stdio.h>
#include <stdlib.h>
#define test 0

int main(){
	char a[11], b[11];
	char std[26]={0,};
	int N, sum=0;
	int ret=0;
	
	scanf("%d %s",&N, a);
	for(int i = 0; a[i]; i++)std[a[i]-'A']++;
	
	for(int m=0;m<N-1;m++){
		char temp[26]={0,};
		scanf("%s",b);
		for(int i = 0 ; b[i] ; i++) temp[b[i]-'A']++;

		sum = 0;
		for(int i = 0 ; i<26 ; i++) sum = sum + (int)abs(std[i]-temp[i]);
#if test
		printf("%d\n",sum);
		for(int i = 0 ; i < 26; i++) printf("%d",std[i]);
		printf("\n");
		for(int i = 0 ; i < 26; i++) printf("%d",temp[i]);
#endif
		if(sum<2)
			ret++;
	}
	printf("%d",ret);

	return 0;
}