#include<iostream>
using namespace std ;
int n , i, k, M[1000] ;
void cauhinhdau(){
    for(int i = 1 ; i<=n ; i++) cin>>M[i] ; 
}
void sinhhoanvi() {
    i  = n-1; 
    while(M[i] > M[i+1] && i>0) i-- ; // duyệt từ sau ra đầu tìm vị trí i đầu tiên mà M[i] < M[i+1] ;  
    if(i == 0) {
        for(int i=1 ; i<=n ; i++) cout<<i<<" "; 
        cout<<endl ; 
    } else { // --> tìm được vị trí i. 
        k = n ; 
        while(M[k] < M[i]) k-- ; // tìm vị trí k đầu tiên bên phải sang lớn hơn M[i] ; 
        int tmp = M[k] ; // đổi giá trị M[i] và M[k] ; 
        M[k] = M[i] , M[i] = tmp ; 
        int l = i+1  ,  r = n ; // đảo ngược lại từ vị trí i+1 về sau
        while(l<r) {
            int tmp = M[l]  ; M[l] = M[r] ; M[r] = tmp ; 
            l++ ; r-- ; 
        }
        for(int i =1 ; i<=n ; i++) cout<<M[i]<<" " ; 
        cout<<endl ;
    }
}
main(){
    int t; cin>>t ; 
    while(t--){
        cin>>n ; 
        cauhinhdau();
        sinhhoanvi() ;
    }
}
/*Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. Nhiệm vụ 
của bạn là đưa ra hoán vị tiếp theo của X[]. Ví dụ N=5, X[] = {1, 2, 3, 4, 5} 
thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤103.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
2
5 
1  2  3  4  5
5
5  4  3  2  1
 

1 2  3  5  4
1 2  3  4  5*/