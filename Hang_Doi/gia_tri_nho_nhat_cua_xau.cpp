#include<bits/stdc++.h>
using namespace std ; 
struct cmp {  // khao báo hàng đợi ưu tiên (tương tự như stack)
    bool operator()(int a , int b){ // cho a vào b vào
        return a<b ;  // hàng đợi này ưu tiên số lớn hơn ra trước nên top là số lớn nhất
        // ở đây a<b nghĩa là a ở dưới, b ở trên (theo đúng nghĩa stack)
    }
} ; 
void solve(string s, int n){
    int count[100]  = {0}  ; // khởi tạo mảng đếm
    for(int i=0 ; i<s.size() ; i++){
        count[s[i]] ++ ; // đếm số lượng xuất hiện của ký tự
    }
    priority_queue<long long > Q  ; // hàng đợi ưu tiên thì sẽ có .top() . Nó tương tự như stack
    // chỉ khác mỗi là khi push vào thì nó sẽ sắp xếp lại.
    for(int i=0; i<100 ; i++){
        if(count[i] > 0 ) Q.push(count[i]) ; // đẩy các ký tự vào
    }
    int i=1  ; // biến chạy
    while(i<=n and Q.size()>0){ // nếu đã loại bỏ hết k phần tử rồi hoặc bỏ quáđộ dài của xâu
        int k = Q.top() ;
        k-- ; 
        Q.pop() ; 
        Q.push(k) ;  
        i++; 
    }
    long long min = 0 ; 
    while(!Q.empty()){
        min+= Q.top()*Q.top() ;
        Q.pop()  ; 
    }
    cout<<min<<endl ; 
}
main(){
    int t; cin>>t  ; 
    while(t--){
        int n ; cin>>n ; // n là số ký tự bỏ đi
        cin.ignore() ; 
        string s  ; cin>>s ; 
        solve(s ,n) ; 
    }
}
/*
Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. Ta định nghĩa giá trị của xâu S[] 
là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. Ví dụ với xâu S[] = “AAABBCD” 
ta có F(S) = 3^2 + 2^2 + 1^2 + 1^2 = 15. Hãy tìm giá trị nhỏ nhất của xâu S[] sau 
khi loại bỏ K ký tự trong xâu.
Input:
Dòng đầu tiên đưa vào số lượng test T (T≤100).
Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại số K. 
Dòng thứ 2 ghi lại xâu ký tự S[] có độ dài không vượt quá 10^6.
Output:
Đưa ra giá trị nhỏ nhất của mỗi test theo từng dòng.
Input
Output
2
0
ABCC
1
ABCC

6
3
*/