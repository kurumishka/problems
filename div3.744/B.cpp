#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n;
    cin >> n;
    V(int) v(n);
    V(string) ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++) {
        int d = i;
        for (int j = i; j < n; j++)
            if (v[j] < v[d]) d =j;
        int e = v[d];
        V(int) temp (n);
        for (int j = i; j < d; j++)
            temp[j+1]=v[j];
        temp[i] = e;
        for (int j = i; j <= d; j++)
            v[j]=temp[j];
        if (i != d) a.pb({i+1,d+1});
    }
    cout << a.size() << endl;
    for (auto &x : a)
        cout << x.first << " " << x.second << " " << x.second-x.first << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
