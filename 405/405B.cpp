#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string ss; cin >> ss;
    int sum, l, r, t;
    int all = 0;

    for (int i = 0; i<n; i++)
        if( ss[i] == '.') all++;

    l = r = sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == 'L' && !r)
        {
            all -= i;
            continue;
        }
        if (ss[i] == 'R')
        {
            r++;
            t=i;
            continue;
        }
        if (ss[i] == 'L' && r)
        {
            t = i-t-1;
            all -= (t%2) ? t-1 : t;
            r--;
            continue;
        }
        if (i+1 == n && r)
        {
            t = i-t;
            all -= t;
        }
    }
    cout << all << "\n";
    return 0;
}
