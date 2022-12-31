#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    string s;
    cin >> s;
    V<int> a(s.size());
    int sum = 0;
    for (int i = 0; i < (int)s.size(); ++i) {
        a[i] = s[i]-'a'+1;
        sum += a[i];
    }
    if (s.size() == 1) {
        cout << "Bob " << sum << endl;
        return;
    }
    if (s.size()%2 == 0) {
        cout << "Alice " << sum << endl;
        return;
    }
    cout << "Alice " << sum-min(a[0], a.back())*2 << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
