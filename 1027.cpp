/*
 1027 : 인접한 문자 제거하기 HARD
 
 문제 설명
 다음과 같이 인접한 문자를 모두 제거하는 기능을 구현하세요.
 
 문자열 S 가 주어질 때,
 
 S[i] == S[i+1] 인 가장 작은 i 를 찾습니다.
 S[i] 와 S[i+1] 를 제거합니다.
 S[i] == S[i+1] 인 i 가 존재하지 않을 때까지 반복합니다.
 예를 들어,
 
 입력 문자열 S 가 SIEEILLL 이라면 위의 과정을 통해 아래 순서대로 변하게 됩니다.
 
 SIEEILL -> SIILL -> SLL -> S
 
 위의 과정이 완료된 후 남은 문자열을 답으로 출력합니다.
 
 입력
 첫 줄에는 테스트 케이스 T (1 <= T <= 100) 이 주어집니다.
 
 다음줄부터 각 줄엔 하나의 테스트 케이스에 대한 문자열 S가 주어집니다.
 
 문자열 S 의 길이는 1 이상 100,000 이하이며 모두 영문 대문자로 구성되어 있습니다.
 
 출력
 한 줄에 하나씩 인접한 문자들을 제거하고 남은 결과를 출력합니다.
 
 입력 예시
 2
 SIEEILL
 SH
 출력 예시
 S
 SH

 */
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        deque<char> dq;
        cin>>s;
        for(int i=0;i<s.size();i++){
            char c = s.at(i);
            if(!dq.empty()){
                if(dq.back() == c) dq.pop_back();
                else dq.push_back(c);
            }
            else dq.push_back(c);
        }
        while(!dq.empty()){
            cout<<dq.front();dq.pop_front();
        }
        cout<<"\n";
    }
}