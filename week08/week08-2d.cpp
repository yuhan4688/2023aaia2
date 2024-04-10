///week08-2c.cpp 三角形
#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int space=n-i,star = i;
        for(int k=1;k<=space;k++) printf(" ");
        for(int k=1;k<=star;k++) printf("*");
        printf("\n");
    }
}
///第1層樓有1顆星星,空格有n-i
///第2層樓有2顆星星
///第3層樓有3顆星星
