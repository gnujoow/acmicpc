#include <stdio.h>

#define test 0
int main() {
	int com[100][100] = { 0, };
	int N, net;
	int ret = 0;

	scanf("%d", &N);
	scanf("%d", &net);

	for (int i = 0; i < net; i++) {
		int x, y;
		scanf("%d %d", &x, &y);

		//대각선 반전 맵핑
		com[x - 1][y - 1] = 1;
		com[y - 1][x - 1] = 1;
	}

	//1번 콤퓨타 감염 
	com[0][0] = 1;

#if test
	for (int i = 0; i<N; i++) {
		for (int j = 0; j < N; j++)
			printf("%d ", com[i][j]);

		printf("\n");
	}
#endif

	//가로로 쭉 보면서 1번이랑 감염된거 표시
	for (int i = 0; i < N; i++) {
		if (com[i][0] == 1) {
			for (int j = 1; j < N; j++) {
				if (com[i][j] == 1) {
					com[i][j] = 0;
					com[j][0] = 1;
					i=0;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (com[i][0] == 1)
			ret++;
	}

#if test
	printf("1--------------------\n");
	for (int i = 0; i<N; i++) {
		for (int j = 0; j < N; j++)
			printf("(%d,%d)%d  ", i+1, j+1, com[i][j]);

		printf("\n");
	}
#endif
	printf("%d", ret-1);

	return 0;
}