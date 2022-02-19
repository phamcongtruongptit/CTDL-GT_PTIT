//Liet ke cac xau nhi phan do dai n: su dung quay lui - BackTrack
#include <iostream>
using namespace std;
int n, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << s[j] << " ";
	return;
}
int dem=0;
void BackTrack(int j){	//Liet ke cac xau nhi phan do dai n
	for(int i=0; i<=1; i++){	//Xet cac kha nang cua s[j]: 2 kha nang 0 va 1
		s[j]=i;					//Thu nhan s[j]
		if(j==n){				//Thanh phan cuoi cung
			print();
		}
		else{
			BackTrack(j+1);
			dem++;
		}		//Chua du thanh phan: liet ke cac cau hinh con tu j+
	}
}
int main() {
	cout << "\nLiet ke BackTrack cac xau nhi phan do dai n:\n";
	n=4;
	BackTrack(2);
	cout<<dem;
	return 0;
}
