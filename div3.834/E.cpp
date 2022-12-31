#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;
#define inc h+=x/2;++k;continue;

void solve() {
    int n,h;
    cin >> n>>h;
    V<int> a(n);
    for (auto&x:a)
        cin>>x;
    sort(all(a));
    int k = 0;
    V<int> v = {2,2,3};
    do {
        int lk = 0, i =0, lh=h;
        for (auto&x:a){
            if (lh>x){
                lh+=x/2;
                ++lk;
            } else {
                while (lh<=x&&i<3) {
                    lh*=v[i];
                    ++i;
                }
                if (lh<=x) break;
                lh+=x/2;
                ++lk;
            }
        }
        k = max(k,lk);
    } while (next_permutation(all(v)));
    cout << k << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
