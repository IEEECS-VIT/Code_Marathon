#Author- Ritik Gupta
for i in range(t):
    n=int(input())
    f=[]
    x=0
    r=0
    a=[int(i) for i in input().split()]
    for i in range(len(a)):
        x=x^a[i]
    y=x
    j=0
    while(y>0):
        if y&1==1:
            break
        else:
            j=j+1
            y=y>>1
    z=1<<j
    res=0
    for i in range(len(a)):
        if((z & a[i])!=0):
            res=res^a[i]   
    f.append(res)
    f.append(res^x)
    f.sort()
    print(f[0],end=" ")
    print(f[1])
