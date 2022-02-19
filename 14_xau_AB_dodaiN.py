def inxau(s):
    for i in range(0 , n ):
        print(s[i],end='')
    print(' ',end='')
def sinhxau():
    global s,n,cauhinhcuoi
    i = n-1
    while s[i]=='B' and i>=0:
        s[i] = 'A'
        i-=1
    if i == -1:
        cauhinhcuoi = True
        return
    s[i] = 'B'
    return
t = int(input())
while(t>0):
    n = int(input())
    cauhinhcuoi = False
    s =[]
    for i in range(1 , n+1):
        s.append('A')
    while cauhinhcuoi == False:
        inxau(s)
        sinhxau()
    print()
    t-=1