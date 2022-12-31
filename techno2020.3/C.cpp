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
    int k,n;
    cin >> n >> k;
    string v;
    cin >> v;
    vector<pair<int,int>> op (n);
    auto cur = op.begin();
    for (int i = 0; i < n; i++) {
        char need = (i%2) ? ')' : '(';
        if (v[i] != need)
            for (int j = i; j < n; j++)
                if (v[j] == need) {
                    reverse(v.begin()+i, v.begin()+j+1);
                    *cur = {i,j};
                    cur++;
                    break;
                }
    }
    int d = n/2;
    while (k < d) {
        for (int i = 0; i < n; i++)
            if (v[i] == ')') {
                for (int j = i; j < n; j++)
                    if (v[j] == '(') {
                        reverse(v.begin()+i, v.begin()+j+1);
                        *cur = {i,j};
                        cur++;
                        break;
                    }
                d--;
                break;
            }
    }
    cout << cur-op.begin() << endl;
    auto it = op.begin();
    while(it != cur) {
        cout << it->first+1 << " " << it->second+1;
        cout << endl;
        it++;
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
