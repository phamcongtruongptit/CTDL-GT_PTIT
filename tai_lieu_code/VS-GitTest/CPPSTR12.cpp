#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isHave(string s, char c){
for(int i = 0; i < s.length(); i++) if(s[i] == c) return true;
return false;
}
bool fullString(int A[], string s1){
for(int i = 0; i < s1.length(); i++) if(A[(int)s1.at(i)] == -1) return false;
return true;
}
int main()
{
    cin.tie(0); ios_base::sync_with_stdio(false);
    int test; cin >> test;
    while(test--)
    {
        bool check = false;
        int A[300] = {0};
        for(int i = 0; i < 300; i++) A[i] = -1;
        string s; cin >> s;
        set<char> st;
        for(int i = 0; i < s.length(); i++) st.insert(s[i]);
        string s1(st.begin(), st.end());
        int start = 0, end = 0, ans = 1e5;
        for(int i = 0; i < s.length(); i++)
        {
            if(isHave(s1, s.at(i)))
            {
                A[(int) s.at(i)] = i;
                if(fullString(A, s1))
                {
                    int local = 1e9;
                    for(int j = 0; j < s1.length(); j++)
                    {
                        local = min(local, A[(int)s1.at(j)]);
                    }
                    ans = min(ans, i - local + 1);
                }
            }
        }
        cout << ans << endl;
    }
}