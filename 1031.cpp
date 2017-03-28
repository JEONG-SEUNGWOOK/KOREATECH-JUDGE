/*
 1031 : 다양한 진법 변환
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 진법 간에 변환하는 프로그램을 작성하는 문제 입니다.
 
 10진수 숫자 A와 진법 B가 주어질 때,
 
 10진수 A를 B진법으로 변환하여 출력하세요.
 
 참고로, 16진법 표현과 마찬가지로 10 ~ 15 는 차례대로 A, B, C, D, E 로 표기합니다. (대문자 주의)
 
 입력
 첫 줄에는 테스트 케이스 T (1 <= T <= 10,000) 이 주어집니다.
 
 다음 줄 부터 각 줄에는 하나의 테스트 케이스에 대한 10진수 A와 진법 B가 주어집니다.
 
 10진수 A의 범위는 1 ~ 10,000 이고, B 는 2 ~ 16 입니다.
 
 출력
 한 줄에 하나씩 진법 변환 결과를 출력합니다.
 
 입력 예시
 4
 100 2
 100 8
 100 16
 13 15
 출력 예시
 1100100
 144
 64
 D
 */
#include <cstdio>
#include <stack>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N,M;
        stack<int> s;
        scanf("%d%d",&N,&M);
        while(N!=0){
            s.push(N%M);
            N/=M;
        }
        while(!s.empty()){
            if(M > 10 && s.top() >= 10) printf("%c",s.top()+55);
            else printf("%d",s.top());
            s.pop();
        }
        printf("\n");
    }
}
