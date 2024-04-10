///week08-2c.cpp 三角形
#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int star = i;

        for(int k=1;k<=star;k++) printf("*");
        printf("\n");
    }
}
///第1層樓有1顆星星
///第2層樓有2顆星星
///第3層樓有3顆星星