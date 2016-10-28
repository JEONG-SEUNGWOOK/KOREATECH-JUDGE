/*

#include <iostream>
using namespace std;

int W,H;
char map[101][81];
bool isVisited[101][81];
int cnt=0,ans=0;
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
       
void dfs(int h, int w){
    isVisited[h][w]=true;
    cnt++;
    for(int i=0;i<4;i++){
        int nh=h+dh[i], nw=w+dw[i];
        
        if(nh>=0 && nw>=0 && nh<H && nw<W && !isVisited[nh][nw] && map[nh][nw]=='*'){
            dfs(nh,nw);
            
        }
    }
}
int main(){
    cin >> W>>H;
    for(int i=0 ; i<H;i++)
        cin>>map[i];
    
    for(int i=0; i<H; i++){
        for(int j=0;j<W;j++){
            if(!isVisited[i][j] && map[i][j]=='*') {
                cnt=0;
                dfs(i,j);
                if(cnt>ans) ans=cnt;
            }
        }
    }
    
    cout<<ans<<'\n';
}

*/