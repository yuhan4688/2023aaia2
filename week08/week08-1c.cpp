///week08-1.cpp九九乘法表&畫星星的相同之處
#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){///左手i
        int space =i,star=n;
        for(int k=1;k<=space;k++) printf(" ");
        for(int k=1;k<=star;k++) printf("*");
        ///for(int j=1;j<=9;j++){  ///右手j
        ///    printf("*");

        printf("i:%d\n",i);
    }
}