/*
 1032 : 완전수
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 수학에서 완전수(Perfect number)라고 하면, 자연수에서 양의 약수중 자기 자신을 제외하고 더했을 때, 자기 자신이 되는 수를 말합니다.
 
 이러한 완전수에는 6, 496 등이 있습니다.
 
 6의 약수로는 1, 2, 3, 6 이 있고 이중 자기 자신인 6을 제외한 합 (1 + 2 + 3) 은 6이 됩니다.
 
 입력으로 주어진 자연수가 완전수인지 아닌지를 판단해 주세요.
 
 입력
 32bit signed integer 범위의 자연수 하나가 주어집니다.
 
 출력
 그 숫자가 완전수인지 아닌지를 판단하여, 완전수일 경우 perfect, 완전수가 아닐경우 no perfect를 출력 해 주세요. (대소문자 주의)
 
 입력 예시
 6
 출력 예시
 perfect
 */

#include <stdio.h>
int main(){
    long long N,sum=1,i;
    scanf("%lld",&N);
    for(i=2;i*i<=N;i++){
        if(N%i==0) {
            sum+=i;
            sum+=N/i;
        }
    }
    if(sum!=N || N==1) printf("no perfect\n");
    else printf("perfect\n");
}
