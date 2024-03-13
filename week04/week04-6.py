class Solution:
    def pivotInteger(self, n: int) -> int:
        total=0 #全部數字加起來是0
        for i in range(1,n+1):#1,2,3,4,5....
            total += i #先算全部的總和
        #再做第2倫，檢查左邊的總和
        left=0
        for i in range(1,n+1):
            left += i
            if left +left - i == total: return i
        return -1
