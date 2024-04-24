///week10-4.cpp 要看變數範圍 variable scope
///5-7
#include <stdio.h>
int z=100; ///在外面的global variable 全域變數
void myFunc() {
    int x=20; ///裡面的local variable 區域變數
    printf("myFunc()  裡的x是:%d z是:%d\n  ",x,z);
    printf("在離開時順手把x,z都設成0\n");
    x=0;
    z=0;
}

int main()///主函式
{
    int x=10;///裡面的local variable 區域變數
    printf("main()  裡的x是:%d  z是:%d\n",x,z);
    myFunc();
    printf("main()  裡的x是:%d  z是:%d\n",x,z);
}