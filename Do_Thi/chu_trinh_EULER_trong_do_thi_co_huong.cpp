#include<bits/stdc++.h>
using namespace std  ;
int n ,e ; 
int G[1005][1005] ; // ma trận kề
void input(){
    memset(G , 0 , sizeof(G)) ; 
    int d , c ; 
    cin>>n>>e ; 
    while(e--){
        cin>>d>>c ; 
        G[d][c] = 1 ; // chuyển ds cạnh --> ma trận kề
    }
}
int tinh(){ // chu trình euler có hướng: tất cả các đỉnh có bậc ra == bậc vào
    int vao , ra ; 
    for(int i=1 ; i<=n ; i++){
        vao = 0  ; ra = 0 ; 
        for(int j=1 ; j<=n ; j++){
            if(G[i][j] == 1) vao++ ;
            if(G[j][i] == 1) ra ++  ;  
        }
        if(vao!=ra) return 0 ; 
    }
    return 1; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cout<<tinh()<<endl ; 
    }
}
/*Cho đồ thị có hướng liên thông yếu G=<V, E> được biểu diễn dưới 
dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có chu trình Euler hay không?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: 
dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh 
của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra 1, 0 kết quả mỗi test theo từng dòng tương ứng với đồ thị có chu
 trình Euler và trường hợp không tồn tại đáp án.
2
6  10  
1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4
3 3
1 2 2 3 1 3

1
0
*/