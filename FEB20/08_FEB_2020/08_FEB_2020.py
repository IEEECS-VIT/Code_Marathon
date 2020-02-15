#Author - Kaustabh Singh
t=int(input())
for i in range(t): #for test cases
    a=list()
    s=int(input()) #for matrix size
    for j in range(s):
        inp = list(map(int,input().split())) #taking input for each row
        a.append(inp)
    c=0
    for j in range(s):
        for k in range(s):
            l=a[j][k] #calculation of M[x1][y1]
            for y in range(j,s):
                for z in range(k,s):
                    if (l>a[y][z]): #checking M[x1][y1] is greater rhan M[x2][y2] or not
                        c=c+1 # storing count
    print(c)
