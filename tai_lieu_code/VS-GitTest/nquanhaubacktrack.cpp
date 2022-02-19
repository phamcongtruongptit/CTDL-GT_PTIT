//Bai toan n quan Hau: su dung quay lui - BackTrack co dieu kien
#include <iostream>
using namespace std;
int n, X[100], i, count=1;
bool Cols[100], Xuoi[100], Nguoc[100];
void print(){	//In mot nghiem
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << X[j] << " ";
	return;
}
int dem=0;
void BackTrack(int i){	//Hang i dat 1 hau
	for(int j=1; j<=n; j++){	//Xet cac cot j
		if(Cols[j]&&Xuoi[i-j+n]&&Nguoc[i+j-1]){	//cot j, cac duong cheo chua i, j chua co Hau
			X[i]=j;				//Dat hau i o cot j
			Cols[j]=false;	Xuoi[i-j+n]=false;	Nguoc[i+j-1]=false;	//Cot j va cac duong cheo chua i, j da co hau
			if(i==n){			//Moi hang da co 1 Hau: in nghiem
				print();
			}
			else{
				BackTrack(i+1);
				dem++;
			}	//Chua du thanh phan: dat 1 Hau vao hang i+1
			Cols[j]=true;	Xuoi[i-j+n]=true;	Nguoc[i+j-1]=true;	//Cot j va cac duong cheo chua i, j chua co hau
		}
	}
}
int main() {
	cout << "\nBai toan n quan Hau:\n";
	n=3;
	for(int k=1; k<=2*n; k++){	//Khoi tao cac cot va duong cheo: chua co Hau
		Cols[k]=true;	Xuoi[k]=true;	Nguoc[k]=true;
	}
	BackTrack(1);
	cout<<dem;
	return 0;
}
