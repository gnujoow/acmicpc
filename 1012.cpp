#include <cstdio>
#include <stack>
using namespace std;

int M, N;
int map[51][51]={0,};
const int dx[] = {-1,1,0,0};
const int dy[] = {0,0,1,-1};

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
            if(nx < 0 || nx > M-1 || ny < 0 || ny > N-1) continue;
            if(map[ny][nx] == 1){
                s.push(make_pair(nx,ny));
                map[ny][nx]=cnt;
            }
        }
    }
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int K, x,y;
		scanf("%d %d %d",&M, &N, &K);
		while(K--){
			scanf("%d %d",&x,&y);
			map[y][x] = 1;
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
	}
	return 0;
}