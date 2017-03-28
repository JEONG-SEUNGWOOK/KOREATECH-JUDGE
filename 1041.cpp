/*
 1041 : 최소 이동거리 구하기 - 2차원
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 수업과 동아리 활동과 과제로 바쁜 한기대 생들은 조별모임을 좀더 효율적으로 하고 싶어 합니다.
 조별 모임을 하기 위해서는 조원이 모두가 모임 장소로 이동을 해야 하는데, 전체가 이동하는 이동 거리의 합을 최소로 하고 싶습니다.
 
 문제를 간단하게 하기 위해서 우리가 2차원 평면상에 있고 이동은 x축, y축으로만 이동할 수 있다고 제한을 둡니다. 만약 위치가
 
 (1, 4), (8, 1), (4, 2)
 
 에 있다고 한다면, (4, 2)의 위치로 모이면 총 이동 거리가 10으로 최소가 됩니다.
 
 입력
 입력의 첫 줄에 조원의 수 N (1 <= N <= 100,000) 이 입력 됩니다.
 
 두번째 줄부터는 N명의 조원의 위치 x, y ( 0 <= x, y <= 10,000) 가 주어집니다.
 
 출력
 모두 이동하는 최소 이동거리를 구해주세요.
 
 입력 예시
 3
 1 4
 8 1
 4 2
 출력 예시
 10
 */
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
    int N;
    long long sum=0;
    vector<int> x;
    vector<int> y;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        x.push_back(a);
        y.push_back(b);
    }
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    int midX=x[N/2], midY=y[N/2];
    for(int i=0;i<N;i++)
        sum+=abs(midX-x[i]) + abs(midY-y[i]);
    printf("%lld\n",sum);
}
