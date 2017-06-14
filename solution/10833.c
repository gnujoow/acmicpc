//https://www.acmicpc.net/problem/10833
//2016.04.14

#include <stdio.h>

int main (){
	int ret = 0 ;
	int student,apple;
	int N;

	scanf("%d",&N);
	for (int i = 0 ; i < N ;i++){
		scanf("%d %d",&student,&apple);
		ret += (apple % student);
	}

	printf("%d",ret);
	return 0;
}