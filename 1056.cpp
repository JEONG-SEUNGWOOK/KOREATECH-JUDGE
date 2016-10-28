/*
#include <stdio.h>

int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int w[101];
        w[1]=1;
        w[2]=2;
        for(int i=3; i<=N; i++){
            w[i]=w[i-1]+w[i-2];
            w[i]%=1000000007;
        }
        printf("%d\n",w[N]);
    }
}
*/