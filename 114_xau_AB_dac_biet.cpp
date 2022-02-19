#include<iostream>
using namespace std ;
bool cauhinhcuoi;
int n , k ; 
string M = "" ; 
string check = "" ;  
bool kiemtra(){ // hàm kiểm tra xâu có thỏa mãn hay không
    int d = M.find(check);  // hàm find tìm chuỗi con . Nếu tìm thấy trả về giá trì đầu tiên bên trái sang
    int c = M.rfind(check); // hàm rfind tìm chuỗi con ngược. Nếu tìm thấy trả về giá trì đầu tiên bên phải sang
    if( d>=0 &&  d <= n-1 &&  c>=0 &&  c <= n-1  ) {
        if( d == c ) return true ; // nếu d = c thì xâu đó có duy nhất 1  xâu con
    }
    return false ; 
}
void in() { // hàm in xâu
    cout<<M<<endl ; 
}
void sinh() { // hàm sinh
    int i=n-1; 
    while(M[i]=='B' and i>=0) {
        M[i] = 'A' ; 
        i--;
    }
    if(i==-1){
        cauhinhcuoi = true; return ;
    }
    M[i] = 'B' ; 
}
main() {
    cin>>n>>k ; 
    cauhinhcuoi = false; 
    int dem = 0 ; // khởi tạo biến đếm
    for(int i=1 ; i<=n ; i++) M+="A" ;  // khởi tạo hàm ban đầu
    for(int i=1; i<=k ; i++) check+="A" ; // khởi tạo xâu thỏa mãn yêu cầu đề
    while(cauhinhcuoi == false){ // vòng để đếm số xâu thỏa mãn
        if(kiemtra() == true) {
        dem++ ; 
        }
        sinh() ; 
    }
    M="" ; 
    for(int i=1 ; i<=n ; i++) M+="A" ; // khai báo lại chuỗi để sinh lại
    cout<<dem<<endl ; // in số xâu tm
    cauhinhcuoi = false ; 
    while(cauhinhcuoi == false){ // hàm sinh lại để in ra những xâu thỏa mãn
        if(kiemtra() == true) {
            in() ; 
        }
        sinh() ; 
    }
}