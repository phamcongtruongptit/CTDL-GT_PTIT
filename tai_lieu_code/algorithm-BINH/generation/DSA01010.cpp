// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;


int A[100] = {}, n, k, B[100];
bool hasNext = true; // check co cau hinh tiep theo

void next_generation(){
        
	int pos = k; // vi tri trong mang A
    while (A[pos] == n - k + pos) pos--; // duyet den khi nao A[pos] chua dat gia tri max = n - k + pos
    
    // in ra neu cau hinh da dat max
    if (A[1] == n - k + 1) {
        hasNext = false;
        return;
    }
    
    else {
        A[pos]++; // tang gia tri A[pos] += 1
        for (int j = pos + 1; j <= k; j++)
            A[j] = A[j-1] + 1; // nhung gia tri sau pos se = gia tri truoc no +1
    }
}



void solution(){
	hasNext = true;
	
	cin >> n >> k;
	
	for(int i=1; i<=k; i++) cin >> A[i], B[i] = A[i]; // khoi tao cau hinh ban dau, mang B la copy cua mang A
	
	next_generation();
	
	if(!hasNext) cout << k << endl; // neu cau hinh cuoi cung thi tat ca deu dc nghi
	else{
		// thuc hien dem phan tu khac nhau
		int ans = 0;
		for(int i=1; i<=k; i++){
			bool check = false;
			for(int j=1; j<=k; j++){
				if(A[i] == B[j]) check = true;
			}
			if(check) ans++;
		}
		cout << k - ans << endl;
	}
	
	
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
