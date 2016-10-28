/*
 1015 : 괄호 짝
 
 문제 설명
 괄호마을의 우두머리 리습은 최근 골치를 썩고 있습니다. 원래 (, ) 밖에 살지 않던 마을이였는데 살다보니 {, }, [, ] 들이 추가가 되면서 관리를 하기 너무 복잡해 진 것이죠.
 
 사람이 늘다보니 질서가 너무 어지럽혀 졌습니다. 본디 괄호란 서로 짝이 어울리는 위치에 있어야 하는데 말이죠.
 
 리습의 골치를 해결해 주기 위해 나열된 괄호를 보고 올바른 짝이 맞는지 아닌지 판단하여 알려주세요.
 
 입력
 첫 줄에는 테스트 케이스 T (1 <= T <= 1,000) 이 주어집니다.
 
 둘 째 줄부터 한줄에 하나씩 괄호마을의 괄호 상태가 주어집니다. 길이는 최대 1000개 입니다.
 
 출력
 각 테스트 케이스가 올바른 상태인지, 그른 상태인지에 대해 올바르면 'yes', 그렇지 않으면 'no'를 출력을 해 주세요.
 
 입력 예시
 4
 [](){}
 []](){}
 [(){})]
 [({}){}]
 출력 예시
 yes
 no
 no
 yes

 */

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        stack<char> s;
        bool flag=true;
        char c[1001];
        cin>>c;
        for(int i=0; i<strlen(c); i++){
            char ch=c[i];
            if(ch=='(') s.push('(');
            else if(ch==')'){
                if(s.empty()){
                    flag=false;
                    break;
                }
                char nc=s.top(); s.pop();
                if(nc!='(') {
                    flag=false;
                    break;
                }
            }
            
            else if(ch=='[') s.push('[');
            else if(ch==']'){
                if(s.empty()){
                    flag=false;
                    break;
                }
                char nc=s.top(); s.pop();
                if(nc!='[') {
                    flag=false;
                    break;
                }
            }
            
            else if(ch=='{') s.push('{');
            else if(ch=='}'){
                if(s.empty()){
                    flag=false;
                    break;
                }
                char nc=s.top(); s.pop();
                if(nc!='{') {
                    flag=false;
                    break;
                }
            }
        }
        if(flag && s.empty()) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}

