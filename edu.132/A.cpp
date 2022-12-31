#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int x;
    cin >> x;
    map<int,int> m;
    cin >> m[1] >> m[2] >> m[3];
    map<int,bool> f;
    int h = 0;
    while (!f[x] && x!=0) {
        f[x]=true;
        h++;
        x=m[x];
    }
    if (h==3) cout <<"YES" << endl;
    else cout << "NO" << endl;

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
