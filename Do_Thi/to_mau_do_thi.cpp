#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int > L[1005];
int v,e,m;
int mau[1005];
bool check(int k,int i){
    for(int j=0;j<L[k].size();j++){
        if(mau[L[k][j]]==i)
        return false;
    }
    return true;
}
bool TRY(int k){
    if(k==v+1) return true;
    for(int i=1;i<=m;i++){
        if(check(k,i)){
            mau[k]=i;
            if(TRY(k+1)){
                return true;
            }
            mau[k]=0;
        }
    }
    return false;
}
void solve(){
        cin>>v>>e>>m;
        int start,end;
        for(int i=0;i<1005;i++)
        L[i].clear();
        for(int i=1;i<=e;i++){
            cin>>start>>end;
            L[start].push_back(end);
            L[end].push_back(start);
        }
        memset(chuaxet,false,1005);
        memset(mau,0,1005);
        if(TRY(1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
/*Một trong những bài toán kinh điển của lý thuyết đồ thị là bài toán Tô màu đồ 
thị. Bài toán được phát biểu như sau: Cho đồ thị vô hướng G =<V, E> được biểu diễn 
dưới dạng danh sách cạnh và số M. Nhiệm vụ của bạn là kiểm tra xem đồ 
thị có thể tô màu các đỉnh bằng nhiều nhất M màu sao cho hai đỉnh kề nhau đều có màu 
khác nhau hay không?
https://media.geeksforgeeks.org/wp-content/uploads/mcolor.png
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất 
đưa vào ba số V, E, M tương ứng với số đỉnh, số cạnh và số màu; phần thứ hai đưa 
vào các cạnh của đồ thị.
T, V, E, M thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤N(N-1), 1≤V≤N.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
2
4  5  3
1 2
2 3
3 4
4 1
1 3
3 3 2
1 2
2 3
1 3

YES
NO
*/