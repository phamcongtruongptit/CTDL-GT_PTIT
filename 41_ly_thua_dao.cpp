#include<iostream>
// long Max = 1000000007 ; 
int Max =  1e9 + 7;
int m = 1e9 + 7;
using namespace std  ; 
long long N , R ; 
void input() {
    cin>>N ; 
    long long n = N ; 
    R=0 ;  
    while(n>0){
        R = R*10 + n%10 ; 
        n/=10 ; 
    }
} // N^R ; 
long long poww(long long N , long long R ) {
    if (R==0) return 1 ; 
    long long x = poww(N , R/2)  ;
    if (R%2 == 0) return (x*x) % Max  ; 
    return ((N)*((x*x) % Max))%Max ; 
}
long long powww(long long i,long long j){
	if(j == 0) return 1;
	long long x = powww(i,j/2);
	if(j%2 == 0) return (x%m * x%m)%m;
	return (i)*(x%m * x%m )%m;
}
void solve() {
    input() ; 
 //   cout<<N<< " "<<R<<endl ; 
    cout<<poww(N,R)<<endl  ; 
}
main() {
    int t; cin>>t ; 
    while(t--) solve() ; 
}