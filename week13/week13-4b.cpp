///week13-4b.cpp 求兩數最大
#include <stdio.h>
int gcd(int a,int b) {
    if(a==0) return b;
    if(b==0) return a; ///可以不用
    return gcd(b,a%b);
}///輾轉相除法


int main()
{ ///C語言的寫法
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
}
