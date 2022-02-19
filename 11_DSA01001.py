t = int(input()) 
while t>0: 
    s = input()
    lst = []
    for i in range(0,len(s),1):
        lst.append(s[i])
    i = len(s) - 1
    while lst[i] == '1' and i>=0:
        lst[i] = '0'
        i-=1 
    if i>=0:
        lst[i] = '1'
    for i in range(0,len(s) , 1 ):
        print(lst[i],end='')
    print()
    t-=1 






    