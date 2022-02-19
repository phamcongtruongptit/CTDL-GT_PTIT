def inxau():
    global n,M
    for i in range(0,n):
        print(M[i],end='')
    print()
def kbit1():
    global n , k ,M, cauhinhcuoi
    i=n-1
    while M[i]==1 and i>=0:
        M[i]= 0 
        i-=1
    if i==-1:
        cauhinhcuoi = True
        return
    M[i] = 1 
    count = 0 
    for i in range(0 , n):
        if M[i]==1:
            count+=1
    if count == k:
        inxau()
t = int(input())
while t>0:
    n , k = map(int , input().split())
    cauhinhcuoi = False
    M = []
    for i in range(1 , n+1):
        M.append(0) 
    while cauhinhcuoi == False:
        kbit1()
    t-=1