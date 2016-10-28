/*
 1025 : 단색이 좋아
 
 문제 설명
 한 줄에 빨강, 파랑, 초록 색상의 공들이 섞여 있습니다.
 
 각 공의 색깔은 순서대로 R, B, G 로 표현합니다.
 
 여러분은 한 턴에 제일 앞의 공 혹은 제일 뒤의 공을 제거할 수 있습니다.
 
 한 색깔의 공만 남기기 위해서는 최소 몇 번의 턴이 필요할까요?
 
 입력
 첫 줄에는 테스트 케이스 T (1 <= T <= 100) 이 주어집니다.
 
 다음줄부터 각 줄엔 하나의 테스트 케이스에 대한 문자열(S)이 주어집니다.
 
 문자열은 R, G, B 문자로만 이루어져 있으며,
 
 길이는 1 이상 10 이하 입니다.
 
 출력
 한 줄에 하나씩 최소 몇 번의 턴이 필요한 지를 숫자로 출력 합니다.
 
 입력 예시
 4
 RRGGBB
 R
 RGBRGB
 RGGGBB
 출력 예시
 4
 0
 5
 3

*/
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int cnt[11],max=1;
        string s;
        char c,n;
        cin>>s;
        c=s.at(0);
        cnt[0]=1;
        for(int i=1;i<s.size();i++){
            n=s.at(i);
            if(c==n) cnt[i]=cnt[i-1]+1;
            else cnt[i]=1;
            if(max<cnt[i]) max=cnt[i];
            c=n;
        }
        cout<<s.size()-max<<"\n";
    }
}

*/