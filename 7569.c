#include <stdio.h>
#define size 101*101*101

int q[size][3] = { 0, };

int main() {
	int M, N, H;
	int map[101][101][101] = { 0, };
	int tomato = 0;

	const int nx[6] = { 1, -1, 0 , 0, 0, 0 };
	const int ny[6] = { 0, 0, 1 , -1, 0, 0 };
	const int nz[6] = { 0, 0, 0 , 0, 1, -1 };
	int front = 0, rear = 0;

	int time = 0;

	scanf("%d %d %d", &M, &N, &H);
	for (int z = 0; z < H; z++) {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				scanf("%d", &map[z][y][x]);
				if (map[z][y][x] == 0 || map[z][y][x] == 1) {
					tomato++;
					if (map[z][y][x] == 1) {
						q[front][0] = x;
						q[front][1] = y;
						q[front++][2] = z;
					}
				}
			}
		}
	}

	while (!(front == rear)) {
		int tempX = q[rear][0];
		int tempY = q[rear][1];
		int tempZ = q[rear++][2];
		tomato--;
		for (int i = 0; i < 6; i++) {
			int x = tempX + nx[i];
			int y = tempY + ny[i];
			int z = tempZ + nz[i];
			
			if (x< 0 || y < 0 || z < 0 || x > M - 1 || y > N - 1 || z > H - 1)continue;
			
			if (map[z][y][x] == 0) {
				map[z][y][x] = map[tempZ][tempY][tempX] + 1;
				
				q[front][0] = x;
				q[front][1] = y;
				q[front++][2] = z;

				if (time < map[z][y][x]) time = map[z][y][x];
			}
		}
	}
	if (tomato == 0) {
		printf("%d\n", time - 1);
	}
	else
		printf("%d\n", -1);
	return 0;
}

