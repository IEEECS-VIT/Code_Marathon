# Author- Lakhan Nad
s = input()
countarr = [0]*26;
i = 0
while i < len(s):
    x = ord(s[i])-ord('a')
    c = 1;
    j = 1;
    while(i+j < len(s) and s[i+j] == s[i]):
        c += 1
        j += 1
    i = i + j
    if(countarr[x] < c):
        countarr[x] = c
queries_count = int(input())
for _ in range(queries_count):
    flag = False
    z = int(input())
    for y in range(1,27):
        if(z%y==0 and z//y <= countarr[y-1]):
            flag = True
    if(flag):
        print("Yes")
    else:
        print("No")    