///week09-2.cpp 函式裡的變數 vs. 外面的變數
#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("myFuncA()裡的x是:%d\n",x);
}
int main()
{
    int x=100;
    printf("main()裡的x是:%d\n",x);
    myFuncA();
    printf("main()裡的x是:%d\n",x);
}
