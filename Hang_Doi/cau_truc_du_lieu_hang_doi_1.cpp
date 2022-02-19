#include<bits/stdc++.h>
using namespace std ; 
main(){
    int t ; cin>>t ; 
    while(t--){
        queue <int> Q ; 
        int n ; cin>>n ; 
        int  k ; 
        while(n--){
            cin>>k ; 
            if(k==1) cout<<Q.size()<<endl ; 
            if(k==2) {
                if(Q.empty()) cout<<"YES"<<endl ; 
                else cout<<"NO"<<endl ; 
            }
            if(k==3) {
                int c ; cin>>c ; 
                Q.push(c) ; 
            } 
            if(k==4){
                if(Q.empty()) continue; 
                else {
                    Q.pop() ; 
                }
            }
            if(k==5){
                if(Q.empty()) cout<<-1<<endl ; 
                else cout<<Q.front()<<endl ; 
            }
            if(k == 6){
                if(Q.empty()) cout<<-1<<endl ;
                else cout<<Q.back()<<endl ; 
            }
        }
    }
}
/*Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:
Trả về kích thước của queue
Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
Cho một số nguyên và đẩy số nguyên này vào cuối queue.
Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
Dữ liệu vào
Dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ theo dạng sau.
Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000)
N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 106.
Kết quả: In ra kết quả của các truy vấn..
Ví dụ:
Input
Output
1
14
3 1
3 2
3 3
5
6
4
4
4
4
4
3 5
3 6
5
1
out:
1
3
5
2
 */