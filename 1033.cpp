
#include <stdio.h>

int main(){
    int N,i;
    bool flag = true;
    scanf("%d",&N);
    for(i=2;i*i<=N;i++){
        if(N%i==0){
            flag = false;
            break;
        }
    }
    if(!flag || N<2) printf("not prime\n");
    else printf("prime\n");
}
