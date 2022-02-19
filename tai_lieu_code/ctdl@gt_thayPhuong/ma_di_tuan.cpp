// Hanh trinh cua quan ma tren ban co
#include <bits/stdc++.h>
#define MAX 8 
using namespace std;
int N, sol[MAX][MAX];
// 8 phep dich chuyen tiep theo cua quan ma
int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 }; 
int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 }; 
//thiet lap cac gia tri ban dau
void Init(void )  {
	cout<<"Nhap N="; cin>>N;
    // thiet lap ma tran ket qua
    for (int x = 0; x < N; x++) //tat ca cac o ghi -1
        for (int y = 0; y < N; y++) 
            sol[x][y] = -1; 
	sol[0][0]  =0;//rieng sol[0][0]=0 
}
// dua ra mot phuong an cua bai toan
void Result(void) { 
    for (int x = 0; x < N; x++) { 
        for (int y = 0; y < N; y++) 
            cout<<sol[x][y]<<" ";  
        cout<<endl; 
    } 
} 
// kiem tra phep dich den o (x,y) co an toan khong   
int isSafe(int x, int y) { 
    return ( x >= 0 && x < N && y >= 0 && 
             y < N && sol[x][y] == -1); 
}   
// ham de qui giai bai toan   
int Move(int x, int y, int movei) { 
   int k, next_x, next_y; 
   if (movei == N*N) //neu da la o cuoi cung
       return 1;   
   //thu tat ca cac kha nang dich chuyen
   for (k = 0; k < 8; k++) { 
       next_x = x + xMove[k]; //dich theo hang
       next_y = y + yMove[k]; //dich theo cot
       if (isSafe(next_x, next_y)) { //neu next_x, next_y an toan
         sol[next_x][next_y] = movei; //ghi nhan buoc dich
         if (Move(next_x, next_y, movei+1) == 1) //dich den o next_x, next_y
             return 1; 
         else
             sol[next_x][next_y] = -1;// tra lai gia tri quay lui 
       } 
   }   
   return 0; 
} 
void Solution() {     
	Init(); //thiet lap N, sol[i][j]
    if (Move(0, 0, 1) == 0) { 
        cout<<"Khong co giai phap"<<endl; 
    } 
    else
        Result(); //dua ra giai phap      
}   
//test solution
int main() { 
    Solution(); 
    return 0; 
}
