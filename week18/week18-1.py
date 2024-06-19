#week18-1.py soit108 advance 008
a=list(map(int,input().split()))

a.sort(reverse=True)

for now in a:
	print(now,end=' ')