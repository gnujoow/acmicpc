//https://www.acmicpc.net/problem/7576
//2016.04.15

#include <stdio.h>
#define test 0
void show();

int M, N;//x ,y
int time = 1;
int tomato = 0;

int map[1001][1001] = {0,};
int q[1002001][2];
int front=0, rear=0;
const int di[] = { -1, 1, 0, 0 };
const int dj[] = { 0, 0, 1, -1 };

int main(){
#if test
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d %d",&M,&N);
	for (int y = 0 ; y < N ; y++){
		for(int x = 0 ; x < M ; x++){
			scanf("%d",&map[y][x]);
			if(map[y][x] == 0 || map[y][x] == 1){
				tomato ++;
				if(map[y][x] == 1){
					q[front][0]  = x;
					q[front++][1] = y;
				}
			}
		}
	}

	while(!(front == rear)){
		int tempx = q[rear][0];
		int tempy = q[rear++][1];
		tomato--;
		for(int i = 0 ; i < 4 ; i++){
			int x = tempx + di[i];
			int y = tempy + dj[i];

			if( x < 0 || x > M -1|| y < 0 || y > N -1)continue;
			if(map[y][x] == 0){
				map[y][x] = map[tempy][tempx] +1;
				if(time < map[y][x])time = map[y][x];
				q[front][0]  = x;
				q[front++][1] = y;
			}
		}
#if test
		show();
#endif
	}
	if(tomato == 0)
		printf("%d\n",time-1);
	else
		printf("%d\n",-1);
	return 0;
}

void show(){
	printf("------- %d  %d---------\n",time,tomato);
	for(int i  =0 ; i < N ; i++)
	{
		for(int j = 0 ; j < M ; j++)
			printf("%d ",map[i][j]);

		printf("\n");
	}
}