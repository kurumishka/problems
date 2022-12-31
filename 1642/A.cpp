#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    V<pair<int,int>> v(3);
    for (auto& x : v)
        cin >> x.first >> x.second;
    sort(all(v), [](pair<int,int>&a, pair<int,int>&b){return a.second < b.second;});
    if (v[2].second == v[1].second)
        cout << abs(v[2].first-v[1].first) << endl;
    else
        cout << 0 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
