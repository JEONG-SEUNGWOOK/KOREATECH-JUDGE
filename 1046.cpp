/*
 1046 : 빠른 길 찾기
 
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 새로 연구원으로 입사한 현서는 아직 교내 지리가 익숙하지 않습니다.
 현서를 위해 교내 지도가 주어질 때, 현재의 위치에서 목적지 까지 가는 가장 짧은 거리를 구하는 프로그램을 만들 어 주세요.
 
 입력
 첫 줄에는 테스트 케이스의 수 T가 주어집니다. (1 <= T <= 10)
 
 각 테스트 케이스의 첫 줄에는 두개의 정수 N, M ( 1 <= N, M <= 100 ) 이 주어집니다.
 그 다음  N줄에는 M개의 지도를 나타내는 문자가 주어지며, 각 문자는 아래와 같은 의미를 가집니다.
 
 S : 현재 현서의 위치
 E : 목적지
 - : 갈 수 있는 곳
 # : 갈 수 없는 곳
 모든 지도에는 현재 위치와 목적지는 단 한개씩만 존재 합니다.
 
 출력
 각각의 테스트 케이스에 대하여 길이 있으면 가장 짧은 길을, 그렇지 않으면 -1을 출력 해 주세요.
 
 입력 예시
 1
 5 5
 S-###
 -----
 ##---
 E#---
 ---##
 출력 예시
 9
 
 */
 

#include <cstdio>
#include <queue>
using namespace std;

int pr[4] = {1,-1,0,0};
int pc[4] = {0,0,1,-1};

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N,M,cnt=0;
        char map[102][102];
        bool visited[102][102]={0,};
        bool flag = false;
        queue<pair<int, int>> q;
        
        scanf("%d%d",&N,&M);
        for(int i=0;i<N;i++)
            scanf("%s",map[i]);
        
       
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(map[i][j]=='S') q.emplace(i,j), visited[i][j]=1;
            }
        }
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int r = q.front().first, c = q.front().second;
                q.pop();
                
                if(map[r][c]=='E'){
                    printf("%d\n",cnt);
                    flag = true;
                    break;
                }
                
                for(int i=0;i<4;i++){
                    int nr = r+pr[i], nc = c+pc[i];
                    if(nr < 0 || nc < 0 || nr >= N || nc >= M) continue;
                    if(visited[nr][nc]) continue;
                    if(map[nr][nc]=='#') continue;
                    visited[nr][nc]=1;
                    q.emplace(nr,nc);
                }
            }
            if(flag) break;
            cnt++;
        }
        if(!flag) printf("-1\n");
    }
}
