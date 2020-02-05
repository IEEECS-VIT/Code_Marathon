# Author- Lakhan Nad
q = int(input())
for _ in range(q):
    s = input()
    l = len(s)
    if(s==s[::-1]):
        if(l%2 == 1):
            print(l//2)
            continue
        else:
            print("-1")
            continue
    for i in range(0, l//2 + 1):
        if(s[i] != s[l-1-i]):
            if(s[i] == s[l-i-2] and s[i:l-i-2] == s[l-i-2:i:-1]):
                print(l-i-1)
                break
            elif(s[i+1] == s[l-i-1] and s[i+1:l-i-1] == s[l-i-1:i+1:-1]):
                print(i)
                break
            else:
                print("-1")
                break