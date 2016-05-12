#include <stdio.h>
#include <stdlib.h>

int check(int pre, int next, int op){
	if(op == '<')
		return 1;
	else if ( op == '>')
		return 1;
}

int main(){
	int *op;
	int N;
	
	scanf("%d",&N);
	op = (int *)calloc(N,sizeof(int));
	for(int i = 0 ; i < N ; i++)
		scanf("%d", op[i]);



	free(op);
	return 0;
}