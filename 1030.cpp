/*
 1030 : 한번 주식 거래하기
 
 문제 설명
 결혼을 해야할 때가 되어서, 돈을 좀더 모으고자 주식에 관심을 가지게 된 광성(3x세 미혼)은 어떻게 하면 가장 주식을 성공적으로 거래할 수 있는지를 고민하고 있습니다. 하지만 회사업무와 고양이를 돌보느라 바쁜 광성은 하루에 한번만 거래를 (한번 사고/ 한번 팜) 하기로 결정을 했습니다.
 
 시간순으로 주가가 주어졌을때, 최대 한번씩 사고 / 팔 때 얻을 수 있는 가장 큰 이득이 얼마인지를 알려주세요. (이득을 낼 수 없으면 거래를 하지 않아도 됩니다)
 
 입력
 첫 줄에는 주어지는 주식 가격의 수 N (2 <= N <= 10,000)이 주어집니다.
 
 두번째 줄부터 N+1 번째 줄 까지는 각 시간의 주가 P ( 1 <= P <= 1,000,000) 이 주어집니다.
 
 출력
 얻을 수 있는 최대 이득이 얼마인지를 구해주세요.
 
 입력 예시
 10
 2000
 2050
 3420
 3200
 4000
 3000
 1000
 1050
 2000
 1000
 출력 예시
 2000
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N,max=0;
    vector<pair<int, int>> v;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        v.push_back(make_pair(a, i));
    }
    sort(v.begin(), v.end());
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(v.at(i).second < v.at(j).second)
                if(v.at(j).first-v.at(i).first > max) max=v.at(j).first-v.at(i).first;
        }
    }
    cout<<max<<"\n";
}