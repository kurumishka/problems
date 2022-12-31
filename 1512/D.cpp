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
    n+=2;
    V<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(all(a));
    int sum = 0;
    for (int i = 0; i < n-2; ++i)
        sum+=a[i];
    if (sum == a[n-2] || sum == a[n-1]) {
        for (int i = 0; i < n-2; ++i)
            cout << a[i] << " ";
        cout <<endl;
        return;
    }
    sum+=a[n-2];
    for (int i = 0; i < n-1; ++i)
        if (sum-a[i] == a[n-1]) {
            for (int j = 0; j < n-1; ++j) {
                if (j == i) continue;
                cout << a[j] << " ";
            }
            cout << endl;
            return;
        }
    cout << -1 << endl;
    
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
