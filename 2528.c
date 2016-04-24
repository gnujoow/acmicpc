//https://www.acmicpc.net/problem/2528
//2016.04.14

#include <stdio.h>
#include <stdlib.h>

int N, L;
int t = 0;
int * start, * end, * dir;

void move(int pos);

int main(){
	scanf("%d %d",&N,&L);

	start = (int *)malloc(sizeof(int)*L);
	end = (int *)malloc(sizeof(int)*L);
	dir = (int *)malloc(sizeof(int)*L);

	//각 층에 대한 길이와 방향
	for(int i =0 ; i < N ; i++){
		int len;
		scanf("%d %d", &len, &dir[i]);
		if(!dir[i]){
			start[i] = 0;
			end[i] = len;
		}
		else{
			end[i] = L;
			start[i] = L-len;
		}
	}
	move(0);
	printf("%d\n",t);

	free(start);free(end);free(dir);
	return 0;
}


void move(int pos){
	if (pos == N-1)
		return;
	else if(!(end[pos] < start[pos+1] || start[pos] > end[pos+1]))
		return move(pos +1);

	t++;
	for(int i = pos ; i < N ; i++){
		if(!dir[i]){//정방향
			start[i]++;
			end[i]++;
			if(end[i] == L)
				dir[i] = 1;
		}
		else{//역방향
			start[i] --;
			end[i] --;
			if(start[i] == 0)
				dir[i] = 0;
		}
	}
	return move(pos);
}