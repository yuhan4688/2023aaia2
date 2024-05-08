#week12-3.py 質數篩子法
table= [True]*240000
ans=0 #有幾個質數
for i in range(2,240000): #找出所有可能的質數，質數不會被整除，寶格裡還留著繼承權
  if table[i]==True: #找到質數
    ans += 1
    for k in range(i*i,240000,i): table[k]=False
print("找到",ans,'個質數')