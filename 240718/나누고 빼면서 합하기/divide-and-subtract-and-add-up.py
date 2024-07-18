n,m=tuple(map(int,input().split()))
a=list(map(int,input().split()))

def cal(a,m):
    sumval =0
    while m >=1:
        sumval += a[m-1]
        if m %2==0:
            m = m//2
        else:
            m = m-1
    print(sumval)
cal(a,m)