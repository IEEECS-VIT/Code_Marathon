# Author- Lakhan Nad
t = int(input())
for _ in range(t):
    n,m,q = list(map(int,input().split()))
    arrn = [0]*n
    arrm = [0]*m
    for _ in range(q):
        x,y = list(map(int,input().split()))
        arrn[x-1] = arrn[x-1]^1
        arrm[y-1] = arrm[y-1]^1
    countn = arrn.count(1)
    countm = arrm.count(1)
    print((m-countm)*countn + (n-countn)*countm)