t=int(input())
for _ in range(t):
    n=int(input())
    e1=0
    o1=0
    e2=0
    o2=0
    e1=n//2
    o1=n//2 + n%2
    l=list(map(int,input().split()))
    for i in range(n):
        if(l[i]%2==0):
            e2=e2+1
        else:
            o2=o2+1
    x=0
    if(e2-o1 > 0):
        x=e2-o1
    if(o2-e1 > 0):
        x=o2-e1
    print(n-x)
