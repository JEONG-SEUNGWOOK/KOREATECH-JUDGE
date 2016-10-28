/*

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

*/