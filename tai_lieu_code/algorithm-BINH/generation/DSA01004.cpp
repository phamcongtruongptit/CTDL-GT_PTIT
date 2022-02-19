// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;


int A[100] = {}, n, k;
bool stop = false; // check co cau hinh tiep theo

void next_generation(){
	// in cau hinh
    for (int j = 1; j <= k; j++)
        cout << A[j];
    cout << " ";
        
	int pos = k; // vi tri trong mang A
    while (A[pos] == n - k + pos) pos--; // duyet den khi nao A[pos] chua dat gia tri max = n - k + pos
    
    // in ra neu cau hinh da dat max
    if (A[1] == n - k + 1) {
        stop = true;
        return;
    }
    
    else {
        A[pos]++; // tang gia tri A[pos] += 1
        for (int j = pos + 1; j <= k; j++)
            A[j] = A[j-1] + 1; // nhung gia tri sau pos se = gia tri truoc no +1
    }
}



void solution(){
	stop = false;
	
	cin >> n >> k;
	
	for(int i=1; i<=k; i++) A[i] = i; // khoi tao cau hinh ban dau
	
	while(!stop){
		next_generation();
	}
	cout << endl;
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
