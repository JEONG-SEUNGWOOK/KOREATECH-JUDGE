/*
 1069 : 코끼리의 친구 집 방문
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 코끼리는 친구의 집에 방문하기로 했다. 코끼리의 집은 수직선 위의 0번 좌표 위에 있고, 코끼리의 친구의 집은 좌표 x(x > 0)에 있다. 한 걸음에 코끼리는 1, 2, 3, 4, 5 위치만큼을 앞으로 움직일 수 있다. 코끼리가 친구 집에 도착하기 위해서 최소 몇 걸음을 움직여야 하는가?
 
 입력
 첫 줄에 코끼리의 친구의 집의 좌표 정수 x(1 <= x <= 1,000,000)가 주어진다.
 
 출력
 코끼리가 좌표 0에서 좌표 x로 움직이기 위하여 필요한 최소 걸음 수를 출력한다.
 
 입력 예시
 5
 출력 예시
 1
*/

#include <stdio.h>
int N,cnt;
int main(){
    scanf("%d",&N);
    cnt=N/5;
    if(N%5) cnt++;
    printf("%d\n",cnt);
}

//main(N){scanf("%d",&N);printf("%d\n",N%5?N/5+1:N/5);}
