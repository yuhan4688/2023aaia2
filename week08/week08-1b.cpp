///week08-1.cpp九九乘法表&畫星星的相同之處
#include <stdio.h>
int main()
{
    for(int i=1;i<=9;i++){  ///左手i
        for(int j=1;j<=9;j++){  ///右手j
            printf("*");
        }
        printf("i:%d\n",i);
    }
}
