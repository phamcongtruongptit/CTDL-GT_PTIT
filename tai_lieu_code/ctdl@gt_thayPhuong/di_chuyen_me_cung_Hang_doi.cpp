// Duong di cua con chuot trong me cung 
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 100    
int Maze(int maze[][MAX], int n, int m) { 
    queue<pair<int, int> > q; //tao q la mot hang doi cac pair
    queue <string> path;//tao path la hang doi cac string
    q.push(make_pair(0, 0)); //dua pair<0,0> vao hang doi      
    int count = 0; //so luong duong di ban dau la 0  
    string str ="";//xau duong di ban dau la rong
    path.push(str); //dua str vao hang doi path
    while (!q.empty()) { //lap khi nao hang doi rong
        pair<int, int> p = q.front(); q.pop();//lay p la node dau hang doi
        str = path.front(); path.pop();//lay str la node dau path                         
        if (p.first == n - 1 && p.second == m - 1){ // neu p la diem cuoi cung
            count++; //tang so luong duong di  
            cout<<str<<endl;
    	}
        // neu dich theo hang duoc chap thuan
        if (p.first + 1 < n && maze[p.first + 1][p.second] == 1) { 
            //dua o vao hang doi
			q.push(make_pair(p.first + 1, p.second)); 
			string s = str +"D"; path.push(s);
        }   
        // neu dich theo cot duoc chap thuan
        if (p.second + 1 < m 
            && maze[p.first][p.second + 1] == 1) { 
            //dua o theo cot vao hang doi
            q.push(make_pair(p.first, p.second + 1)); 
            string s = str +"R"; path.push(s);
        } 
    }   
    return count; 
}   
// Test Solution
int main() { 
    // maze to represent maze 
    int maze[MAX][MAX];
    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++)
    	for(int j=0; j<m; j++)
    		cin>>maze[i][j];
	cout << Maze(maze, n, m)<<endl; 
  
    return 0; 
} 
