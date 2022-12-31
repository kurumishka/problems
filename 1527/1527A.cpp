#include<iostream>
using namespace std;
int depth (int x) {int temp=1; while(x>>= 1){temp++;} return temp;}
int main(void)
{
    unsigned int t, n;
    cin >> t;
    while(t--)
    {   cin >> n;
        cout << (1 << (depth(n)-1))-1 << endl; }
    return 0;
}
