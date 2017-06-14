#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char temp[1000003] = " ";
	gets(temp);

	int ret = 0, len = strlen(temp);
	for(int i = 0 ; i < len ; i++){
		if(temp[i] == ' ') ret++;
	}

	if(temp[0] == ' ') ret --;
	if(temp[len - 1] == ' ') ret --;

	printf("%d\n", ret +1);
	return 0;
}