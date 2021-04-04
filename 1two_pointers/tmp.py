def sumofdigit(i,s):
    sum = int(0)
    while i:
        sum = sum + (i%10)
        i = i/10
    return sum==s


ls = list(map(int,input().split()))
print(ls)
n=ls[0];s=ls[1:]
st=1;en=10
n=n-1
while n != int(0):
    st*=10
    en*=10

en=en-1
mn = -1
mx = -1
mnb=False
for i in range(st,en+1):
    if sumofdigit(i,s) and not mnb:
        mn=i;mnb=True
    if mnb and sumofdigit(i,s):
        mx=i
print(f"{mx} {mn}")