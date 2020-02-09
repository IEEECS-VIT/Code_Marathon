#Author- Ritik Gupta
n=int(input())
a=[int(i) for i in input().split()]
b=0
ma=0
count=0
for i in range(n):
    if a[i]==1:
        b=b+1
        count=count+1
    elif a[i]==0 and b>0:
        b=b-1
        count=count+1
    else:
        count=0
    if b>=ma:
        ma=b
        f=count
if f==0:
    print("1")
else:
    print(f)
    
