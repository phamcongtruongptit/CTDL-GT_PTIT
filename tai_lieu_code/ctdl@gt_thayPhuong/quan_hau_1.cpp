//Bai toan N quan hau
#include <bits/stdc++.h>
#define MAX 15
using namespace std;
int X[MAX];//mang ghi lai loi giai bai toan X[]
int n, dem=0; // n-kich thuoc ban co, dem: so luong loi giai
int COT[MAX]; //mang ghi lai trang thai cot
int XUOI[2*MAX];//mang ghi lai trang thai cac duong cheo xuoi
int NGUOC[2*MAX];//mang ghi lai trang thai cac duong cheo nguoc
//thiet lap cac tham so ban dau
void Init(void){
	//thiet lap n cot ban dau deu chuaxet[]
	for(int i=1; i<=n; i++) 
		COT[i]=true;
	//thiet lap cac duong cheo xuoi, nguoc deu chua xet	
	for(int i=1; i<=2*MAX; i++) {
		XUOI[i]=true;NGUOC[i]=true;	
	} 	
	dem=0;//so luong loi giai ban dau la 0
}
//dua ra mot loi giai
void Result(void){ 	
	cout<<"[";
	for(int i=1; i<=n; i++) cout<<X[i]<<" ";	
	cout<<"] ";
} 
//dua ra loi giai cho bai toan thu i
void Solution(int i){	
	for(int j=1; j<=n; j++){ //duyet tren tap gia tri danh cho X[i]
		//neu kha nang j duoc chap thuan cho quan hau thu i
		if(COT[j]&&XUOI[i-j+n] && NGUOC[i+j-1]) {
			X[i]=j; //thiet lap quan hau i la kha nang j
			COT[j]=false; //cam khong duoc dat quan hau khac vao cot j
			XUOI[i-j+n]=false;//cam khong duoc dat quan hau khac vao dc: i-j+n
			NGUOC[i+j-1]=false;//cam khong duoc dat quan hau khac vao dc: i+j-1
			if(i==n) { //neu la quan hau cuoi cung
				Result(); dem++;//dua ra nghiem bai toan
			}
			else Solution(i+1);//dat quan hau tiep theo
			//Nho hoan tra gia tri quay lui de thu tiep
			COT[j]=true;XUOI[i-j+n]=true;NGUOC[i+j-1]=true;
		}
	}	
}
//test solution
int main(void){
	int T; cin>>T;
	while(T--) {
		cin>>n; Init();Solution(1);
		if(dem==0) cout<<"-1"<<endl;
		else cout<<endl;
	}	
}
