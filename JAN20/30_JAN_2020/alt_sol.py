#Author--Ritik Gupta
t=int(input())
for i in range(t):
    q={1:1}
    n=int(input())
    if i not in q:
        a=n
        for i in range(1,n):
            n=n*i
        q.update({a:n})
        print(n)
        else:
            print(q[n])
            
