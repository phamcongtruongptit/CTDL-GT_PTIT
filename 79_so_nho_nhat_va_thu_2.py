def solve():
    global n  , M
    min1 = M[0]
    for i in range(1 , n):
        if min1 > M[i]:
            min1 = M[i]
    min2 = M[0]
    for i in range(1 , n):
        if min2 > M[i] and M[i] != min1:
            min2 = M[i]
#    print(min1, min2)
    if min1 != min2:
        print(min1, min2)
    else:
        print(-1 )


t = int(input())
while t>0:
    n = int(input())
    M = list(map(int , input().split()))
    solve()
    t-=1