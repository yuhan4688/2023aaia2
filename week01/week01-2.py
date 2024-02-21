#soit106 base 006
a,b,c=list(map(int,input().split()))

if a>=b and a>=c: print(a)
elif b>=a and b>=c: print(b)
else: print(c)