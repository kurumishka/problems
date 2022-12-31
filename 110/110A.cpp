#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n; cin >> n;
    int c = 0;
    for (char x : n)
        if (x == '4' || x == '7')
            c++;
    string nc = to_string(c);
    bool ok = true;
    for (char x : nc)
    {
        if (x != '4' && x != '7')
        {
            ok = false;
            break;
        }
    }
    cout << ((ok) ? "YES" : "NO") << "\n";
    return 0;
}
