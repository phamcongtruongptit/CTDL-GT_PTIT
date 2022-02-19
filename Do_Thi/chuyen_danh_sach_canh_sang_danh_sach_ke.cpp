#include<bits/stdc++.h>
using namespace std ; 
vector <int> List[1005] ; // mảng các vector
void solve(){
    for(int i=0 ;i<1005 ; i++) List[i].clear() ; 
    int v , e ; 
    cin>>v>>e ; 
    int dau,cuoi ; 
    while(e--){
        cin>>dau>>cuoi ; 
        List[dau].push_back(cuoi) ; 
        List[cuoi].push_back(dau) ; 
    }
    for(int i=1 ; i<=v ; i++){
        cout<<i<<": " ; 
        for(int j=0 ; j<List[i].size(); j++) cout<<List[i][j]<<" " ; 
        cout<<endl ; 
    }
    
}
main(){
    int t ; cin>>t ; 
     while(t--){
         solve() ; 
     }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh.0
 Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên
 đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo 
 đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách kề của các đỉnh tương ứng theo khuôn dạng của ví dụ dưới đây. Các đỉnh 
trong danh sách in ra theo thứ tự tăng dần.
Input:
Output:
1
6  9
1  2
1  3 
2  3
2  5
3  4
3  5
4  5
4  6
5  6

1: 2 3
2: 1 3 5
3: 1 2 4 5
4: 3 5 6
5: 2 3 4 6
6: 4 5
*/