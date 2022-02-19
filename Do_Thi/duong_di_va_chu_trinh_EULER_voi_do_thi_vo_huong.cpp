#include<bits/stdc++.h>
    using namespace std ;
    int n , e ; 
    vector<int> L[1005]  ; 
    void input(){
        int  d , c ; 
        cin>>n>>e ; 
        for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
        while(e--){
            cin>>d>>c ; 
            L[d].push_back(c)  ; 
            L[c].push_back(d) ; 
        }
    }
    int check(){
        int chan = 0 , le =  0  ; 
        for(int i=1; i<=n ; i++){
            if(L[i].size() % 2 ==0 ) chan++ ; 
            else le++ ; 
        }
        if(chan == n) return 2 ; // chu trình euler: tất cả các đỉnh đều có bậc chẵn
        else if(le ==2 ) return 1; //đường đi EULER: có 2 đỉnh bậc lẻ còn lại đều là bậc chẵn
        else return 0 ; 
    }
    main(){
        int t; cin>>t ;
        while(t--){
            input() ; 
            cout<<check()<<endl ; 
        }
    }
/*Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy kiểm tra xem đồ thị có đường đi Euler hay chu trình Euler hay không?
Đường đi Euler bắt đầu tại một đỉnh, và kết thúc tại một đỉnh khác.
Chu trình Euler bắt đầu tại một đỉnh, và kết thúc chu trình tại chính đỉnh đó.
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên
 đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào 
 các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra 1, 2, 0 kết quả mỗi test theo từng dòng tương ứng với đồ thị có đường đi Euler, chu 
trình Euler và trường hợp không tồn tại.
2
6  10  
1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6
6 9  
1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6

2
1
*/