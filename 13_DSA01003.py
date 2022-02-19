def sinhhoanvi():
    n = int(input())
    M= list(map(int , input().split()))
    i = n-2 ; 
    while M[i] > M[i+1] and i>=0: 
        i-=1
    k = n-1 ; 
    if i == -1:
        for j in range(1 , n+1 ):
            print(j,end= ' ')
        print()
    else:
        while(M[k] < M[i]):
            k-=1 
        tmp = M[k] 
        M[k] = M[i] 
        M[i] = tmp 
        l = i + 1
        r = n-1
        while l<r:
            tmps = M[l]
            M[l] = M[r]
            M[r] = tmps 
        for j in range(0 ,n ):
            print(M[j], end = ' ')
        print()
t = int(input()) 
while(t>0):
    sinhhoanvi()
    t-=1 ; 
