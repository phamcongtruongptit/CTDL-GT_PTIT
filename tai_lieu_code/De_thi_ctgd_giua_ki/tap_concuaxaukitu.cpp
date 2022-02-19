#include<bits/stdc++.h>
using namespace std;
 int n;
string s;
int M[20];
vector< string >vt;
bool cmp(string M, string b){
    int maz = max(M.size(),b.size());
    for (int i = 0;i<maz;i++){
        if(M[i]>b[i]) return 0;
        if(b[i]>M[i]) return 1;
    }
    return M.size()>b.size();
}
void backtrack(int i){
    for (int j = 0;j<=1;j++){
        M[i]=j;
        if (i==n-1){
            string tmp;
            tmp.clear();
            for(int q = 0;q<n;q++){
                if(M[q]==1) tmp.push_back(s[q]);
            }
            vt.push_back(tmp);
        }
        else backtrack(i+1);
    }
}
int main (){
    int T;
    cin >> T;
    while (T--){
        cin >>n;
        cin >>s;
        vt.clear();
        memset(M,0,sizeof(M));
        backtrack(0);
        sort(vt.begin()+1,vt.end(),cmp);
        for (int i = 1;i<vt.size();i++){
            cout <<vt[i]<<" ";
        }
        cout <<endl;
    }
    return 0;
}