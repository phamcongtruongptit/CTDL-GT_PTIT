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
        if(chan == n) return 2 ; 
        else if(le == 2) return 1; 
        else return 0 ; 
    }
    main(){
        int t; cin>>t ;
        while(t--){
            input() ; 
            cout<<check()<<endl ; 
        }
    }