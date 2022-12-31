#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    V<int> pos, neg;
    for (auto& x : a)
        if (x >= 0) pos.pb(x);
        else neg.pb(-x);
    auto Diff = [](V<int>& a) {
        sort(all(a));
        int prev = 0;
        for (int i = 0; i < (int)a.size(); ++i) {
            int tmp = a[i];
            a[i] = a[i]-prev;
            prev=tmp;
        }
    };
    auto Sums = [](V<int>& a) {
        V<int> sums(a.size());
        for (int i = 0; i < (int)a.size(); ++i)
            sums[i] = (i == 0 ? a[i] : sums[i-1]+a[i]);
        return sums;
    };
    auto Count = [](V<int>& a, V<int>& sums, int k, int s) {
        int ans = 0, l = s;
        if (l==0) l=k;
        while (a.size()) {
            if (l < (int)a.size()) {
                ans+=2*sums[l-1];
                l+=k;
            } else {
                ans+=sums.back();
                break;
            }
        }
        return ans;
    };
    Diff(neg);
    Diff(pos);
    auto sums = Sums(pos);
    int ans = min(Count(pos, sums, k, k), Count(pos, sums, k, pos.size()%k));
    auto neg_sums = Sums(neg);
    ans += min(Count(neg, neg_sums, k, k), Count(neg, neg_sums, k, neg.size()%k));
    if (pos.size() && neg.size())
        ans += min(sums.back(), neg_sums.back());
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
