def inmang( M):
    for i in range(0 , len(M)) :
        print(M[i],end='  ')

arr = list(map(int , input().split()))
inmang(arr)