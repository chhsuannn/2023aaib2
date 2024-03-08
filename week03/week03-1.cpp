///week03-1.cpp
#include <stdio.h>
int main()
{
    int a =5;
    ///if(a%2==1) printf("odd\n");  ///做一次
    while(a%2==1) printf("odd\n");  ///一直做
    ///if(a>0) printf("a is > 0\n");///做一次
    while(a>0) printf("a is > 0\n");///一直做
}
///執行 while 時，竟然就卡在上面
