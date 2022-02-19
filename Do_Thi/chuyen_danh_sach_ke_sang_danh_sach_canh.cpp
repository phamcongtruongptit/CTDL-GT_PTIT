#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n ; 
    cin>>n ; cin.ignore() ;
    vector <int> L[1005] ; 
    for(int i=0  ; i<1005 ; i++) L[i].clear() ; 
    for(int i=1 ; i<=n  ; i++){
        string s;
		stringstream ss;
		int k;
		getline(cin,s);
		ss << s;
        while (ss >> k)  L[i].push_back(k) ;
   }
   for(int i=1 ; i<=n ; i++){
       for(int j=0 ; j<L[i].size() ; j++){
           if(L[i][j]>i) cout<<i<<" "<<L[i][j]<<endl ; 
       }
   }
}
/*Cho đơn đồ thị G vô hướng liên thông được mô tả bởi danh sách kề. Hãy 
in ra danh sách cạnh tương ứng của G.
Input
Dòng đầu tiên ghi số N là số đỉnh (1<N<50)
N dòng tiếp theo mỗi dòng ghi 1 danh sách kề lần lượt theo thứ tự từ đỉnh 1 đến đỉnh N
Output: Ghi ra lần lượt từng cạnh của đồ thị theo thứ tự tăng dần.
3
2 3
1 3
1 2

1 2
1 3
2 3
*/