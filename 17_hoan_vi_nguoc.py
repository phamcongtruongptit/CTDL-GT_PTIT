def incauhinh(M) :
    for i in range(0,len(M)):
        print(M[i],end='')
    print(' ',end='')
def sinhhoanvinguoc():
    global n , cauhinhcuoi , M
    i = n-2
    while(M[i]<M[i+1] and i>=0): 
        i-=1
    if i==-1:
        cauhinhcuoi = True
        return
    k = n-1
    while M[k]>M[i] :
        k-=1
    tmp = M[k]
    M[k] = M[i]
    M[i] = tmp
    l = i+1 
    r= n-1
    while(l<r):
        tmp = M[l]
        M[l] = M[r]
        M[r] = tmp  
        l+=1
        r-=1
t = int(input())
while(t>0):
    n = int(input())
    cauhinhcuoi = False 
    M=[]
    for i in range (1 , n+1):
        M.append(n-i+1)
   # print(M)
    while cauhinhcuoi == False:
        incauhinh(M)
        sinhhoanvinguoc()
    print()
    t-=1