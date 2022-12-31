#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    map<int, set<int>> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]%10].insert(i);
    }
    for (auto i = m.begin(); i != m.end(); ++i)
        for (auto j = m.begin(); j != m.end(); ++j)
            for (auto h = m.begin(); h != m.end(); ++h)
                if ((i->first+j->first+h->first)%10 == 3) {
                    int ai = i->first, bi = j->first, ci = h->first;
                    if (ai == bi && bi == ci) {
                        if (i->second.size() >= 3) {
                            cout << "yes" << endl;
                            return;
                        }
                    }
                    else if ((ai == bi && i->second.size() >= 2) ||\
                        (bi == ci && j->second.size() >= 2) ||\
                        (ai == ci && i->second.size() >= 2) ||\
                        (ai != bi && bi != ci && ai != ci)){
                        cout << "yes" << endl;
                        return;
                    }
                }
   
    cout << "no" << endl;
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
