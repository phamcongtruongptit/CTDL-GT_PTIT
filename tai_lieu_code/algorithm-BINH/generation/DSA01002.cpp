// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

int A[100] = {}, n, k;

void next_generation(){
	int pos = k; // vi tri trong mang A
    while (A[pos] == n - k + pos) pos--; // duyet den khi nao A[pos] chua dat gia tri max = n - k + pos
    
    // in ra neu cau hinh da dat max
    if (A[1] == n - k + 1) {
        for (int i = 1; i <= k; i++)
            cout << i << " ";
        cout << endl;
    }
    
    else {
        A[pos]++; // tang gia tri A[pos] += 1
        for (int j = pos + 1; j <= k; j++)
            A[j] = A[j-1] + 1; // nhung gia tri sau pos se = gia tri truoc no +1

		// in cau hinh
        for (int j = 1; j <= k; j++)
            cout << A[j] << " ";
        cout << endl;
    }
}

void solution(){
	cin >> n >> k;
	
	for(int i=1; i<=k; i++) cin >> A[i];
	
	next_generation();
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
