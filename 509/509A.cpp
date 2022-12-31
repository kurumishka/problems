#include <bits/stdc++.h>
using namespace std;
int count(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;
    else
        return count(n,m-1)+count(n-1,m);
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cout << count(n,n) << "\n";
    return 0;
}