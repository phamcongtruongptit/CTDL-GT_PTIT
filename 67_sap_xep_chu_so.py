def solve():
    global n ,M , check
    for i in range(0 , len(M)):
        while(M[i] > 0):
            check[M[i] % 10 ]+=1
            M[i]/=10 
    for i in range(1  , 10):
        if check[i]>0 :
            print(i  , end= " ")
    print() 
t =int(input())
while t>0 :
    n = int(input()) 
    M = list(map(int , input().split())) 
    check = [0,0,0,0,0,0,0,0,0,0]
    solve()
#
    t-=1