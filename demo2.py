def poww(n , k):
    global M
    if k==0:
        return 1 
    x = poww(n , k/2) % M ; 
    if k%2 == 0:
        return (x*x)%M 
    else: return (n%M * ((x*x)%M) ) %M

t = int(input())
while t>0:
    M = 1000000007
    n , k = map(int , input().split())
    print(poww(n , k))
    t-=1