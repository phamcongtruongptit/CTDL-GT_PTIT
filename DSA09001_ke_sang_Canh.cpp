// #include<bits/stdc++.h>
// using namespace std ; 
// main(){
//     int n ; 
//     cin>>n ; cin.ignore() ;
//     int G[55][55] ;  
//     memset(G, 0 , sizeof(G)) ; 
//     for(int i=1 ; i<=n  ; i++){
//         string s;
// 		stringstream ss;
// 		int k;
// 		getline(cin,s);
// 		ss << s;
//         while (ss >> k) {
//                 G[i][k] = 1 ; 
//                 G[k][i] = 1 ; 
//             }
//    }
//     for(int i=1 ; i<=n ; i++)
//         for(int j= i+1 ; j<=n ; j++) 
//             if(G[i][j]) cout<<i<<" "<<j<<endl ;
// }

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
