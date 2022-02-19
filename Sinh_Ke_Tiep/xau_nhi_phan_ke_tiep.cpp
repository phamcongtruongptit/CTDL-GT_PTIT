#include<iostream>
using namespace std ; 
string s; 
// thuật toán sinh nhị phân
// +  duyệt từ phải qua trái. tìm phần tử đầu tiên bằng 0
// + khi tìm được rồi thì đổi thành 1.
// + các phần tử trở về sau kể từ vị trí đó chuyển thành 0
void sinh(){
    int i = s.length() - 1 ; 
    while( s[i] == '1' && i>=0 ) {
        s[i] = '0' ; 
        i-- ; 
    }
    if(i>=0) s[i] = '1' ; 
}
     
main (){
    int t ; cin>>t ; 
    while(t--) {
        cin>>s ; 
        sinh();
        cout<<s<<endl ; 
    }
}
/*Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu 
nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.
Input

Output

2

010101
111111

010110
000000*/