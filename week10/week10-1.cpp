///week10-1 函式呼叫函式 Recursion 遞迴 N階層
///以前是用 for 迴圈寫，今天用「函是呼叫函式」來寫
#include <stdio.h>
int func(int n){
    if(n==1) return 1;
    return n * func(n-1);
}
int main()
{
    printf("請輸入N:");
    int N;
    scanf("%d", &N);
    int ans = func(N);
    printf("%d", ans);
}
