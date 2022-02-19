def solve():
    global n , M , check
    M.sort()  
    for i in range(0 , n):
        if M[i]!=check[i]:
            left = i+1
            break ; 
    for i in range (n-1 , -1 , -1):
         if M[i]!=check[i]:
            right = i+1
            break ;
    print(left , right)        
t = int(input())
while(t>0):
    n = int(input())
    M = list(map(int , input().split()))
    check = []
    for i in range( 0 , n):
        check.append(M[i])     
    solve()
    t-=1
