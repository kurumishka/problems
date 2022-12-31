#include <bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string ss; cin >> ss;
    set<char> sc;
    for (char x : ss)
        sc.insert(x);
    cout << ((sc.size()%2) ? "IGNORE HIM!" : "CHAT WITH HER!") << "\n";
    return 0;
}
