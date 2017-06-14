#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

int N;
int map[25][25];
int ret[25*25]={0,};
const int dx[] = {-1,1,0,0};
const int dy[] = {0,0,1,-1};
void dfs(int x,int y,int cnt);

int main(){
	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			scanf("%1d",&map[i][j]);
		}
	}

	int cnt=2;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			if(map[i][j]==1){
				dfs(i,j,cnt++);
			}
		}
	}

	printf("%d\n",cnt-2);
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            ret[map[i][j]-2]+=1;
        }
    }
    sort(ret,ret+cnt-2);
    for (int i=0; i<cnt-2; i++) {
        printf("%d\n",ret[i]);
    }
	return 0;
}


void dfs(int x,int y,int cnt){
	stack<pair<int,int> > s;
    s.push(make_pair(x,y));
    map[x][y] = cnt;
    while(!s.empty()){
    	x = s.top().first;
        y = s.top().second;
        s.pop();
		for(int k = 0 ; k < 4 ; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx < 0 || nx > N-1 || ny < 0 || ny > N-1) continue;
			if(map[nx][ny] == 1){
				s.push(make_pair(nx,ny));
				map[nx][ny]=cnt;
			}
		}
	}
}