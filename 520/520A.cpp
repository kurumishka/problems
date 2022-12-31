#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string ss; cin >> ss;
    string al = "abcdefghijklmnopqrstuvwxyz";
    unordered_set<char> us;
    for (char x : ss)
    {
        us.insert(tolower(x));
    }
    if (al.size() != us.size())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
