#include<iostream>
using namespace std ;
int n ; 
void solve() {
    cin>>n ; 
    int check4 = 0 , check7 =0 ;  
    int ans4 = 100000 , ans7 = 100000  ; 
    for(int i=n/4 ; i>=0 ; i--) {
        if( (n- 4*i) % 7 == 0 ) {
            check4 = i  ; 
            check7 = (n- 4*i) / 7 ;
            if((check4 + check7) < (ans4 + ans7) ) {
                ans4 = check4 ; 
                ans7 = check7 ; 
            }
            else if((check4 + check7) == (ans4 + ans7) ){
                if(ans4 > check4) {
                ans4 = check4 ; 
                ans7 = check7 ;                  
                }
            }            
        }
    }
    if (ans4 * 4 + ans7 * 7 == n) {
        for(int i=0 ; i<ans4 ; i++) cout<<4; 
        for(int i=0 ; i<ans7 ; i++) cout<<7;
        cout<<endl ;  
    } else {
        cout<<-1<<endl ;
    }
    
}
main() {
    int t ; cin>>t ; 
    while(t--) {    
        solve() ; 
    }
// }
// #include<iostream>
// #include<queue>
// using namespace std; 
// int n ; 
// void solve() {
//     cin>>n ; 
//     int ans4 = 0 , ans7 = 0 ; 
//     int max4=0 , min7=0 ; 
//     int min4 = 0 ,max7 = 0 ; 
//     for(int i=n/4 ; i>=0 ; i--) {
//         if( (n-4*i) % 7 ==0 ){
//             max4 = i ; 
//             min7 = (n-4*i) / 7 ; 
//             break ; 
//         }
//     }
//     for(int i=0 ; i<n/4 ; i++) {
//         if( (n-4*i) % 7 ==0 ){
//             min4 = i ; 
//             max7 = (n-4*i) / 7 ; 
//             break ; 
//         }
//     }
//     if( max4 + min7 > min4 + max7) {
//         ans4 = min4 ; ans7 = max7 ; 
//     } else if( max4 + min7 <= min4 + max7){
//          ans4 = max4 ; ans7 =  min7 ; 
//     }
//     if (ans4 * 4 + ans7 * 7 == n) {
//         for(int i=0 ; i<ans4 ; i++) cout<<4; 
//         for(int i=0 ; i<ans7 ; i++) cout<<7;
//         cout<<endl ;  
//     } else {
//         cout<<-1<<endl ;
//     }
// }
// main() {
//     int t; cin>>t ;
//     while(t--) {
//         solve() ; 
//     }
// }