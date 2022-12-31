#include <bits/stdc++.h>
using namespace std;
#define YES cout << "YES" << "\n"
#define NO cout <<"NO"<<"\n"

int _min(int a, int b, int c)
{
    return (min(a,b) > c) ? c : min(a,b);
}
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if ((a+b+c)%9)
            NO;
        else
        {
            int d = (a+b+c)/9;
            (_min(a,b,c) < d) ? NO : YES;
        }
    }
    return 0;
}
