///week13-2b.cpp 希望字串很長, <10位數
///Q1: 有多長? Q2:怎麼判斷
#include <string.h>
#include <Stdio.h>
int main()
{
    char line[20]; ///長一點,比較保險
    scanf("%s",line);
    int N = strlen(line); ///知道字串長度
    int bad=0; ///一開始沒有壞掉
    for(int i=0;i<N;i++){
        if(line[i] != line[N-1-i]) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
