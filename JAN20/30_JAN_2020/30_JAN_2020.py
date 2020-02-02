# Author- Lakhan Nad
arr = []
arr.append(1)
for i in range(2,100001):
    arr.append((arr[len(arr)-1]*i)%1000000007
t = int(input())
for _ in range(t):
    n = int(input())
    print(arr[n-1])