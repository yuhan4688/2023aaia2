///week17-2.cpp 選擇排序法
#include <stdio.h>
void myPrint(int a[10]){
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()

{
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    myPrint(a);
    for(int i=0;i<10;i++){ ///左手i
        for(int j=i+1;j<10;j++){ ///右手J
            if(a[i]>a[j]){ ///比較大小
                int temp=a[i];///交換
                a[i]=a[j];
                a[j]=temp;

            }
        }
    myPrint(a);
    }


}