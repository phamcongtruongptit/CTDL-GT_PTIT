def sinhviennghi():
    global cauhinhcuoi  , n , k , M , A 
    if cauhinhcuoi == True:
        return k 
    nghi= k
    for i in range (0, k):
        for j in range(0 , k):
            if M[i]==A[j]: 
                nghi -=1
    return nghi
def sinh():
    global cauhinhcuoi ,n , k , M
    i = k-1 
    while M[i]==n-k+i+1 and i>=0:
        i-=1
    if i==-1:
        cauhinhcuoi = True
        return 
    M[i]+=1
    for j in range(i+1 ,k):
        M[j] = M[i] + j- i
t = int(input())
while t>0:
    n , k = map(int , input().split())
    cauhinhcuoi  = False
    M= list(map(int , input().split()))
    A = []
    for i in range( 0, k ):
        A.append(M[i])
    sinh()
    print(sinhviennghi())
    t-=1 