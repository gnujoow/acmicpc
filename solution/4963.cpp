#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;
 
int w,h;
int map[50][50];
int ret[50*50]={0,};
const int dx[] = {-1,1,0,0, 1, 1,-1,-1};
const int dy[] = {0,0,1,-1, 1,-1, 1,-1};
void dfs(int x,int y,int cnt);
void show();
 
int main(){
    while(1){
        scanf("%d %d",&w,&h);
        if(w==0 && h ==0) break;

        for(int i = 0 ; i < h ; i++){
            for(int j = 0 ; j < w ; j++){
                scanf("%d",&map[i][j]);
            }
        }
     
        int cnt=2;
        for(int i = 0 ; i < h ; i++){
            for(int j = 0 ; j < w ; j++){
                if(map[i][j]==1){
                    dfs(i,j,cnt++);
                }
            }
        }
        printf("%d\n",cnt - 2);
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
        for(int k = 0 ; k < 8 ; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || nx > h-1 || ny < 0 || ny > w-1) continue;
            if(map[nx][ny] == 1){
                s.push(make_pair(nx,ny));
                map[nx][ny]=cnt;
            }
        }
    }
}

