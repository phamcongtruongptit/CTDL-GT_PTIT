//Liet ke cac to hop chap k cua 1..n: su dung quay lui - BackTrack
#include <iostream>
using namespace std;
int n, k, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=k; j++)	cout << s[j] << " ";
	return;
}
int dem=0;
void BackTrack(int j){	//Liet ke cac to hop chap k cua 1..n
	for(int i=s[j-1]+1; i<=n-k+j; i++){	//Xet cac kha nang cua s[j]
		s[j]=i;					//Thu nhan s[j]
		if(j==k){				//Dat den thanh phan cuoi cung, du 1 to hop: in
			print();
		}
		else{
			BackTrack(j+1);
			dem++;
			}		//Chua du thanh phan: liet ke cac cau hinh con tu j+1
	}
}
int main() {
	cout << "\nLiet ke BackTrack cac to hop chap k cua 1..n:\n";
	n=5;	k=3;
	BackTrack(1);
	cout<<dem<<endl;
	return 0;
}
