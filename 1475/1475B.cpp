#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    unordered_set<int> s;
    int st;
    for (int i = 0; i < 1000; i++)
    {
        st = 2020*(i);
        for (int j = i; j < 1000; j++)
        {
            s.insert(st);
            st += 2021;
        }
    }

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << ((s.count(n)) ? "YES" : "NO") << "\n";
    }

    return 0;
}