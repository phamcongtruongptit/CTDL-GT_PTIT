#include<bits/stdc++.h>
using namespace std ; 
// bài này chỉ lăn tăn xử lý số nguyên lớn
string catalan[101] ; 
string tong(string s1, string s2) { // hamf tính tổng 2 số nguyên
    string ans = "" ; 
    while(s1.size() < s2.size() ) s1 = "0" + s1 ; 
    while(s2.size() < s1.size() ) s2 = "0" + s2  ;
    int n = s1.size()  , nho = 0 ; 
    for(int i=n-1 ; i>= 0 ; i--) {
        int so = int(s1[i] - '0') + int(s2[i] -'0') + nho ; 
        ans = char(so%10  + '0' ) + ans ; 
        nho = so/10 ; 
    }
    if(nho > 0) ans = char(nho + '0')   + ans  ;
    return ans ;      
}
string tich(string s1 , string s2) {
    int len1 = s1.size() , len2 = s2.size() ; 
    int len = s1.size() + s2.size() ; 
    vector <int> a ,b ; 
    for(int i = 0 ; i<s1.size() ; i++) a.push_back(int(s1[i] - '0')) ; 
    for(int i = 0 ; i<s2.size() ; i++) b.push_back(int(s2[i] - '0')) ; 
    vector < vector<int> > res(len2) ; 

    int index = 0 ; 
    for(int i=len2 -1  ; i>=0 ; i--){
        // them phan tu 0 vao sau
        int t = 0 ; 
        while(t<index) {
            res[index].push_back(0) ; 
            t++ ; 
        }
        // nhan phan tu
        int nho  = 0, so = 0 ;
        for(int j=len1 -1 ; j>=0 ; j--) {
             so = a[j] * b[i] + nho ; 
            res[index].push_back(so%10) ; 
            nho = so/10 ;  
        }
        if(nho > 0 ) res[index].push_back(nho) ; 
        // them phan tu vao truoc moi dong
        while(res[index].size() < len ) res[index].push_back(0) ; 
        reverse(res[index].begin() , res[index].end()) ;  // dao nguoc vector de no tro ve dung khuon dang
        index++ ; 
    }
    // cong len2 hang lai voi nhau
    string ketqua = "" ; 
    int nho = 0 ; 
    for(int i=len - 1  ; i>=0 ; i--) {
        int so = nho ; 
        for(int j=0 ; j<len2 ; j++) {
            so += res[j][i] ; 
        }
        ketqua = char(so%10 + '0' ) + ketqua ; 
        nho = so/10 ; 
    }
    if (nho > 0) ketqua = char(nho + '0') + ketqua ; 
    while(ketqua[0] == '0' ) ketqua.erase(ketqua.begin()) ; 
    return ketqua ; 
}
void tinh() {
    catalan[0] = catalan[1] = "1" ; 
    for(int i=2 ; i<= 100 ; i++){
        string check = "0" ; 
        for(int j=0 ; j<=i-1 ; j++) {
            check = tong(check , tich(catalan[j] , catalan[i-j-1]) ) ; 
        }
        catalan[i] = check ; 
    }
}
main(){
    tinh() ; 
    int t ; cin>>t ; 
    while(t--) {
        int n ; cin>>n  ; 
        cout<<catalan[n]<<endl ; 
    }
}
/*Catalan Number là dãy số thỏa mãn biểu thức:
cn = 0 nếu n= 0 ;
cn = tổng xích ma i chạy từ 0 đến n-1 của (ci * c(n-i-1))
Dưới đây là một số số Catalan với n=0, 1,2,.. : 1, 1, 2, 5, 14, 42, 132, 429,… Cho số tự nhiên N. 
Nhiệm vụ của bạn là đưa ra số Catalan thứ N.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên n.
T, n thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ n ≤ 100.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
3
5
4
10

42
14
16796
*/