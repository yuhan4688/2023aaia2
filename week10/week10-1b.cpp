//C++的版本要小心class solution{ 和 public 不要動到
class Solution {
public:
    int tribonacci(int n) {
        int a[40]={0,1,1};//前三項項準備好 後面的37項沒寫都是0
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]+a[i-2]+a[i-3];//前三項相加 得到新項

        }
        return a[n]; //答案要算出第n項
    }
};