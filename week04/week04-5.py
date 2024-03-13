#week04-5.py a021 
a=int(input())

ans=1
for i in range(1,a+1):
	ans *=i
print(ans,end='')