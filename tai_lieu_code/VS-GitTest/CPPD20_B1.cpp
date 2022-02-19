#include <bits/stdc++.h>
using namespace std;
//a = 1, in a = 1 ra màn hình, gọi lại hàm test với a = 2, 
int test(int a)
{
    if(a > 10) return 0;
    else return test(a + 1) + test(a + 2);
}
int main()
{
    
}