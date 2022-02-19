#include<bits/stdc++.h>
using namespace std ; 
int n ,k, i  ,  M[1000] ; 
void sinh() {
    i = k ; 
    while(M[i] == n-k+i && i > 0 ) { // duyệt từ sau ra trước
    i-- ; // tìm phần tử đầu tiên mà M[i] != n-k + i (i là số thứ tự trong mảng k)
    }
    if(i==0) {
        for (int j=1 ; j<=k ; j++) M[j] = j ; 
    } else {
    M[i] +=1 ; // tìm được vị trí đó thì tăng thêm 1 tại đó
    for (int j = i ; j<=k ; j++) M[j] = M[i] + (j-i) ; // duyệt đến k thì bằng phần tử tại vị trí tìm được
    // + thêm độ lệch j  - i
    }   

    for(int j =1  ; j<=k ; j++) cout<<M[j]<<" "; 
}
main(){
    int t  ; cin>>t ; 
    while(t--) {
        cin>> n>>k ; 
        for(int i=1 ; i<=k ; i++) cin>>M[i]; 
        sinh() ; 
        cout<<endl ; 
    }
}
/*Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. 
Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. 
Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai 
số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
2
5  3
1  4  5
5  3
3  4  5

2  3  4
1  2  3
*/
