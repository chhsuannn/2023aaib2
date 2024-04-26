/// week10-2.cpp 輾轉相除法 最大 公 因數
/// a大的, b中的, c小的 greatest common divisor
#include <stdio.h>
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a; ///有人會省略這行
    return gcd(b, a%b); ///老二升級變老大, 老三變老二
}
int main()
{
    printf("請輸入 a b 兩個數字: ");
    int a,b;
    scanf("%d%d", &a,&b);
    printf("最大公因數是: %d\n", gcd(a,b));
}
