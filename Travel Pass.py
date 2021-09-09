# cook your dish here
t=int(input())
for _ in range(t):
    n,a,b=map(int,input().split())
    s=input()
    l=list(s)
    c=0
    d=0
    for i in range(n):
        if(l[i]=='0'):
            c=c+1
        else:
            d=d+1
    print(c*a+d*b)
