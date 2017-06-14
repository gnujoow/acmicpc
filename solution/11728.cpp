#include <cstdio>
using namespace std;

int a[1000000];
int b[1000000];
int ret[1000000];
	
int main(){
	int N, M;
	
	scanf("%d %d",&N,&M);
	for(int i = 0 ; i < N ;i++) scanf("%d",&a[i]);
	for(int i = 0 ; i < M ;i++) scanf("%d",&b[i]);

	int A = 0;
	int B = 0;
	int k = 0;

	while (A < N && B < M) {
	 	if(a[A] < b[B]) ret[k++] = a[A++];
        else ret[k++] = b[B++];
    }

    while (A < N) ret[k++] = a[A++];
    while (B < M) ret[k++] = b[B++];
    for (int i=0; i<N+M; i++) {
        printf("%d ",ret[i]);
    }
    puts("");
  

	return 0;
}