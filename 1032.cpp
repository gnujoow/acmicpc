#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int main(){
	int N;
	char cmd[50][51];
	scanf("%d",&N);

	for(int i=0; i<N; i++)
		scanf("%s",cmd[i]);

	for(int i=0; i<strlen(cmd[0]);i++){ // 자리수
		bool same = true;
		for(int j=0 ; j<N ; j++){ // 명령어들
			for(int k=j+1; k<N; k++ ){
				if(cmd[j][i] != cmd[k][i]) same=false;
			}
			if(!same)break;
		}
		if(same) printf("%c",cmd[0][i]);
		else printf("?");
	}
	return 0;
}