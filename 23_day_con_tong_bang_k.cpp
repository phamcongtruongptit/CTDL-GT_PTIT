#include<iostream>
#include<vector> 
#include<algorithm> 
using namespace std ;
int n , k ; 
vector < vector<int> > ans ; 
int M[20]  , v[20] ; 
void input() {
    cin>>n>>k ; 
    ans.clear() ; 
    for(int i=1 ; i<=n ; i++) {
        cin>>M[i] ; 
        v[i] = 0 ; 
    }
    sort(M+1  , M+1+n) ; 
}
void output() {
    if (ans.size() == 0 ) cout<<-1<<endl ; 
    else {
        sort(ans.begin() , ans.end() ) ; 
        for(int i=0 ; i<ans.size() ; i++ ) {
            cout<<"[" ; 
            for(int j=0 ; j<ans[i].size() -1 ; j++) cout<<ans[i][j]<<" " ; 
            cout<<ans[i][ans[i].size()-1]<<"] " ; 
        }        
    }
    cout<<endl ; 
}
void quaylui(int i ) {
    for(int j=0 ; j<=1 ; j++) {
        v[i]  = j ; 
        if(i==n) {
            int sum  = 0 ; 
            for(int l=1 ; l<=n ; l++) {
                if(v[l] ==1 ) sum +=M[l] ; 
            }
            if(sum == k ) {
                vector <int> x ; 
                for(int l=1 ; l<=n ; l++) {
                    if(v[l] ==1 ) x.push_back(M[l]) ; 
                }
                ans.push_back(x) ; 
            }
        } else {
            quaylui(i+1) ; 
        }
    }
}
void solution() {
    input() ; 
    quaylui(1) ; 
    output() ; 
}

main() {
    int t ; cin>>t ;
    while(t--) {
        solution() ; 
    }  
}
/*Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả 
các dãy con của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K.
 Các phần tử của dãy số A[] được giả thuyết là nguyên dương và không có các phần
  tử giống nhau. Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy 
  con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất 
đưa vào số N là số lượng phần tử của dãy số A[] và số K; dòng tiếp theo đưa vào N phần tử của dãy số A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤10; 1≤ K, A[i] ≤100.
Output:
Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự từ điển,
 trong đó mỗi dãy con được bao bởi các ký tự [, ]. Nếu không có dãy con nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.
2
5 50
5  10 15 20  25
8  53
15  22  14  26  32  9  16  8

[5 10 15 20] [5 20 25] [10 15 25]
[8 9 14 22] [8 14 15 16] [15 16 22]
*/