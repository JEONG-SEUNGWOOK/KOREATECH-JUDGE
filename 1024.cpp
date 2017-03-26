/*
 1024 : 더하기 빼기 계산기
 시간 제한	메모리 제한
 1 Sec	128 MB
 문제 설명
 더하기와 빼기로만 이루어진 수식을 계산하는 계산기를 만들어보세요.
 
 입력
 한줄에 하나씩 수식 F가 입력됩니다.
 
 F의 최소 길이는 1이고 최대 길이는 1000 입니다. 결과는 32 bit signed integer 범위 안에 있다고 가정해도 좋으며, 계산 과정에서도 overflow는 발생하지 않는다고 가정해도 됩니다.
 
 출력
 계산 결과를 출력해 주세요.
 
 입력 예시
 2015+11-11
 출력 예시
 2015
 */
#include <stdio.h>
int main(){
    int n;
    char c;
    scanf("%d",&n);
    int sum=n;
    while((c=getchar())!=EOF){
        scanf("%d",&n);
        if(c=='+') sum+=n;
        else if(c=='-')sum-=n;
    }
    printf("%d\n",sum);
}
