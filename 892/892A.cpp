#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int sum = 0; int temp, fm, sm;
    fm = sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp >= fm)
        {
            sm = fm;
            fm = temp;
        }
        else if (temp >= sm && temp < fm)
            sm = temp;
    }
    cout << ((fm+sm >= sum) ? "YES" : "NO") << "\n";
    return 0;
}
