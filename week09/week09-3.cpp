///要了解字串與陣列的關係
#include <stdio.h>
int main()
{
    printf("請入10個字母，不能有空格在裡面:\n");
    char line[11];///奧比字母多一個
    scanf("%s",line);///不要有空格
    printf("這個字是:%s 裡面的字，分別是:\n");

    for(int i=0;i<11;i++){
        printf("第%d字母:%c 對應的數字是:%d\n",i,line[i],line[i]);
    }
}
