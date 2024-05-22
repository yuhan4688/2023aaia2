///week14-3.cpp 課本P2-09 比大小的值 不成立是0,0是成立
#include <stdio.h>
int main()
{
    int a=5;
    ///if(a>0){ ///實驗完註解掉
    ///    printf("a:%d\n",a);
    ///}
    ///while(a>0){///實驗完註解掉
    ///    printf("a:%d\n",a);
    ///}
    ///while(1) printf("a:1\n"); ///執行時會印出東西嗎?
    if(999) printf("999成立\n");
    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(0) printf("請問0成立嗎?\n"); ///只有0不成立
    if(-1) printf("-1成立\n"); ///其他都成立
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
}
