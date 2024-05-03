///week11-1.cpp 想要試試質數的篩子法, 先試試舊方法
///想數一下10000以下有幾個質數
#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0; ///被整除,就不是質數
    }
    return 1;
}
int main()
{///利用BOUND變數, 看看到底要設多大的範圍, 30萬, 才能找到2萬個質數
    int BOUND = 300000, ans = 0;
    for(int i=2; i<BOUND; i++){
        if(isPrime(i)){
            printf("%d ",i); ///印出質數
            ans++; ///同時++ 多一個質數
        }
    }
    printf("質數有:%d 個\n", ans);
}
