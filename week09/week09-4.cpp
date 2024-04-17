///week09-4.cpp 字串函式 課本p4-8
#include <stdio.h>
#include <string.h>///要使用字串函式
int main()
{
    char line[100];
    printf("請輸入一堆字母，不要有空格,最後跳行結束輸入\n");
    scanf("%s",line);

    int N=strlen(line);
    printf("字串長度是:%d\n",N);
    ///strcpy(a,"hello"); 字串copy
    ///strccat(a,b); 字串結合 把右邊的b接到左邊的a後面

    ///strcmp(a,b); 字串比較(逐字比較看誰比較大
}
