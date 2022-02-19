// tim so buoc di it nhat cua quan ma
#include <bits/stdc++.h> 
using namespace std;  
// cau truc luu tru cac o: x,y, dis 
struct Point { 
    int x, y; 
    int dis; 
};  
// xac dinh quan ma co trong ban co hay khong
bool isInside(int x, int y, int N) { 
    if (x >= 1 && x <= N && y >= 1 && y <= N) 
        return true; 
    return false; 
}   
// Min move to reach target position 
int minMove(Point beg, Point end,int N) { 
    // ghi nhan huong x, y quan ma co the di chuyen 
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2}; 
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};   
    // hang doi luu tru cac cell 
    queue <Point> q;   
    // dua vao hang doi 
    Point t = beg;
    q.push(t);       
    int x, y; 
    bool visit[N + 1][N + 1]; //mang luu tru trang thai cac o  
    // make all cell unvisited 
    for (int i = 1; i <= N; i++) 
        for (int j = 1; j <= N; j++) 
            visit[i][j] = false; 
  
    // visit starting state 
    visit[beg.x][beg.y] = true;   
    // loop untill we have one element in queue 
    while (!q.empty()) { 
        t = q.front(); 
        q.pop();   
        // if current cell is equal to target cell, 
        // return its distance 
        if (t.x == end.x && t.y == end.y) 
            return t.dis;   			
        // loop for all reachable states         
        for (int i = 0; i < 8; i++) { 
            x = t.x + dx[i]; 
            y = t.y + dy[i];   
            // If reachable state is not yet visited and 
            // inside board, push that state into queue 
            if (isInside(x, y, N) && !visit[x][y]) { 
                visit[x][y] = true; 
                Point v; v.x=x; v.y=y;v.dis=t.dis +1;
                q.push(v);                                 
            } 
        }         
    }     
} 
// Driver code to test above methods 
int main() { 
    int T, N; cin>>T;
    Point beg, end; 
    while(T--){
    	cin>>N;
    	cin>>beg.x>>beg.y;beg.dis=0;
    	cin>>end.x>>end.y;
    	cout<<minMove(beg, end, N)<<endl;
	}
}
