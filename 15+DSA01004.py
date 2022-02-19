def incauhinh(M):
    for i in range(0 , len(M) ):
        print(M[i],end='')
    print(' ',end='')
def sinhcauhinh() :
    global cauhinhcuoi,n,k,M
    i = k - 1
    while M[i]==n-k+i+1 and i>=0:
        i-=1
    if i== -1: 
        cauhinhcuoi = True 
    M[i] +=1 
    for j in range(i+1 , k  ):
        M[j] = M[i] + j-i
    

t = int(input())
while t>0:
    n , k  = map(int , input().split())
    cauhinhcuoi = False
    M = []
    for i in range(1 , k+1 ):
        M.append(i)
    while cauhinhcuoi == False:
        incauhinh(M)
        sinhcauhinh()
    print()
    t-=1


