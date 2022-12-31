#include <bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string ss; cin >> ss;
    int c = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (ss[i] == ss[i+1])
            c++;
    }
    cout << c << "\n";
    return 0;
}
