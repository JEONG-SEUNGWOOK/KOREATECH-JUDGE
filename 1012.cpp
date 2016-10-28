/*
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N, a[1001];
        scanf("%d",&N);
        for(int i=0; i<N; i++){
            int n;
            scanf("%d",&n);
            a[i]=n;
        }
        sort(a,a+N);
        for(int i=0;i<N;i++){
            if(i==N-1) printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
    }
}
*/