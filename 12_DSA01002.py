def sinh():
    n,k = map( int , input().split())
    M = list(map(int , input().split()))
    i = k-1
    while M[i] == n-k+i+1 and i>-1 :
        i-=1 
 #   print(i)
    if (i==-1):
        for x in range(1, k+1):
            print(x,end=' ')
        print()
    else:
        M[i]+=1
        for index in range(i, k , 1):
            M[index] = M[i]+index - i 
        for index in range(0 , k ):
            print(M[index],end=' ')
        print()
t = int(input()) 
while t>0:
    sinh() 
    t-=1 
