///week09-2.cpp要了解字串與陣列的關係
#include <stdio.h>
int main()
{

    char line[80]; ///用一行字讀進來
    printf("請輸入一行英文，有空格沒關係:");
    gets(line);
    printf("這行字是:%s\n",line);

    printf("請再輸入一行字:\n");
    scanf("%s",line);///課本6-16頁，空格斷開
    printf("這行字是:%s\n",line);
}
