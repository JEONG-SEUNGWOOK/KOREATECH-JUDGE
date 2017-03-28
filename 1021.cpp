/*
 1021 : 연속된 최장 길이
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 순열이 주어질 때, 연속으로 증가하는 수의 최장 길이를 구해주세요.
 
 연속으로 증가한다는 의미는, i+1 번째 수가 i번째 수보다 1이 큰 경우 입니다. 예를들어 1, 2, 3, 5, 6 의 연속된 최장 길이는 "1, 2, 3" 으로 답이 3이 됩니다.
 
 입력
 테스트 케이스 T (1 <= T <= 100) 이 주어지며, 각 테스트 케이스에는 순열의 길이 n (0 <= n <= 10)과 n개의 숫자(32bit signed integer)가 공백을 구분으로 입력됩니다.
 
 출력
 각 줄에 하나씩 최장길이를 출력 해 주세요.
 
 입력 예시
 3
 3 1 2 3
 5 1 2 3 5 6
 4 1 2 4 5
 출력 예시
 3
 3
 2
 */
#include <stdio.h>
#include <limits.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N,M[12],ans=1,cnt=1;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%d",&M[i]);
        for(int i=1;i<N;i++){
            if(M[i]-M[i-1]==1 && M[i]!= INT_MIN)cnt++;
            else cnt=1;
            if(cnt > ans) ans=cnt;
        }
        N==0 ? printf("0\n") : printf("%d\n",ans);
    }
}
