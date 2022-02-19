def solve():
    global  n  , M
    sum = M[0] + M[1]
    for i in range(0 , n-1):
        for j in range(i+1, n):
            if abs(M[i] + M[j]) < abs(sum):
                sum = M[i] + M[j]
    return sum
t = int(input())
while t>0:
    n  = int(input())
    M = list(map(int, input().split()))
    print((solve()))
    t-=1