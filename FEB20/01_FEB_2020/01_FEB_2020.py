# Author- Lakhan Nad
n = int(input())
k = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
arr.sort()
arr2 = []
for i in range(0, n-k+1):
    arr2.append(arr[k-1+i] - arr[i])
print(min(arr2))