def solve():
    global M , n 
    M.sort() 
    d = 0 
    c = n-1 
    while d<c:
        print(M[c],M[d],end=" " )
        d+=1
        c-=1
    if d == c:
        print(M[d],end='')
    print() 


import math
t = int(input()) 
while t>0:
    n = int(input()) 
    M = list(map(int , input().split()))
    solve() 
    t-=1 