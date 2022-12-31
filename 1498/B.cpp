#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define null NULL

void solve() {
    int n, w;
    cin >> n >> w;
    multiset<int> a;
    for (int i = 0; i <n; ++i) {
        int x;
        cin>>x;
        a.insert(x);
    }
    int h = 1, rest = w;
    while(!a.empty()) {
        auto l = a.upper_bound(rest);
        if (l != a.begin()){
            --l;
            rest-=(*l);
            a.erase(l);
        } else {
            ++h;
            rest=w;
        }
    }
    cout << h <<endl;

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
