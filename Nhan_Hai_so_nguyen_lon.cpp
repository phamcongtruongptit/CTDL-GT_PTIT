#include<bits/stdc++.h>
using namespace std ; 
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
main() {
    string s1 , s2 ; 
    cin>>s1>>s2 ; 
    cout<<tich(s1, s2)<<endl ; 
}