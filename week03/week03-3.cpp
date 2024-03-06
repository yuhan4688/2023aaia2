#include <stdio.h>
int main()
{
    int a=10;
    printf("%5d 佔了5格\n",a);
    float pi=3.14159265358979328462643383279;
    printf("%f 浮點數只佔8格\n",pi);
    printf("%12f 浮點數只佔12格,結果對其右邊，可惡\n",pi);
    printf("%12.10f 12格，點後佔10格\n",pi);
    double pi2=3.14159265358979328462643383279;
    printf("%12.10f 兩倍浮點數double印右邊10格",pi2);
}
