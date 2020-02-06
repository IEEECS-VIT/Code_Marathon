#Author--Ritik Gupta
t=int(input())
for i in range(t):
    l=[]
    n=int(input())
    a=[int(i) for i in input().split()]
    a=Counter(a)
    # print(a.keys())
    # print(a.values())
    for i in a.keys():
        if a[i]%2==1:
            l.append(i)
    l.sort()
    print(" ".join(map(str,l)))
       
