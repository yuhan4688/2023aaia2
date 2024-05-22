///week14-2.cpp 對應課本P1-7 %s %c
#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("請輸入一行文字,裡面可以有空格，直到跳行結束: ");
    gets(s);
    printf("讀入了: %s\n",s);

    printf("請輸入你的英文名字，不能有空格: ");
    scanf("%s",&s);
    printf("你的英文名字是: %s",s);


    printf("請再輸入一次你的英文名字: ");
    scanf("%c",&c);
    printf("讀到了: %c ",c);
}