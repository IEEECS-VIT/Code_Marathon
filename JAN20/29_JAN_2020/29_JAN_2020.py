#Author- Lakhan Nad
s = input()
t = input()
k = int(input())
s_length = len(s)
t_length = len(t)
if (s_length + t_length) < k: 
    return "Yes"
same = 0
for i in range(min(len(s),len(t))):
    if s[i]==t[i]: 
        same += 1
    else: 
        break
difference = s_length + t_length - 2*same;
if difference <= k and difference % 2 == k % 2: 
    print("Yes")
else:
    print("No")

