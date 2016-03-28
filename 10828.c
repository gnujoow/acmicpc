//https://www.acmicpc.net/problem/10828
//28.03.2016

#include <stdio.h>
#include <string.h>

int stack[10000]={-1,};
int pos = 0;

int read(char * cmd){
	if (!strcmp(cmd,"push")){
		scanf("%d",&stack[pos++]);
	}
	else if (!strcmp(cmd,"top")){
		if(pos)
			printf("%d\n",stack[pos -1]);
		else
			printf("%d\n", -1);
	}
	else if (!strcmp(cmd,"size")){
		printf("%d\n",pos);
	}
	else if (!strcmp(cmd,"pop")){
		if (pos)
			printf("%d\n",stack[--pos]);
		else
			printf("%d\n",-1);
	}
	else if (!strcmp(cmd,"empty")){
		if (pos)
			printf("%d\n",0);
		else
			printf("%d\n",1);
	}
	return 0;
}

int main (){
	int size;
	char cmd[100];

	scanf("%d",&size);

	for(int i = 0 ; i < size ; i ++){
		scanf("%s",cmd);
		read(cmd);
	}

	return 0;
}