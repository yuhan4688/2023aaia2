///wee13-1.cpp 了解2D陣列，在於C Tutor測試
#include <stdio.h>
void myPrint(int x[3][4]) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++){
            printf("%2d ",x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][4]; ///陣列宣告 沒有給值會是亂碼
    int b[3][4]={1,2,3}; ///有給值但沒給完
    int c[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}; ///全部值都給

    myPrint(a); ///等一下給C Tutor要註解
    myPrint(b);
    myPrint(c);///觀察印出來的值，思考左手i右手j

}