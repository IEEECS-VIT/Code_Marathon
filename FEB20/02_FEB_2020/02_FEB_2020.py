#Author- Ritik Gupta
from itertools import combinations
t=int(input())
for i in range(t):
    l=[]
    flag=0
    n,m=map(int,input().split())
    for i in range(n):
        a=int(input())
        l.append(a)
    for i in range(1,len(l)+1):
        p=list(combinations(l,i))
        for j in range(len(p)):
            if sum(p[j])==m:
                flag=1
                print("Yes")
                break
        if flag==1:
            break
    if flag==0:
        print("No")
        
        
