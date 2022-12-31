#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define F first 
#define S second

void solve() {
    int n;
    cin >> n;
    map<string,int> m;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        cin >> m[tmp];
    }
    map<string,vector<pair<string,int>>> v;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string tmp;
        cin >> tmp;
        int g;
        cin >> g;
        for (int j = 0; j < g; j++) {
            string ing;
            cin >> ing;
            int c;
            cin >> c;
            v[tmp].pb({ing,c});
        }
    }
    int z;
    cin >> z;
    for (int i = 0; i < z; i++) {
        string s;
        cin >> s;
        int d = 0;
        for (auto it = v.begin(); it != v.end(); it++) {
            int r = 1e9;
            for (int j = 0; j < it->S.size(); j++)
                r = min(r,m[it->S[j].F]/it->S[j].S);
            if (r >= 1) d++;
        }
        cout << d << endl;
        d = 1e9;
        for (int j = 0; j < v[s].size(); j++)
            d = min(d,m[v[s][j].F]/v[s][j].S);
        for (int j = 0; j < v[s].size(); j++) {
            m[v[s][j].F]-=v[s][j].S;
        }
    }
    int d = 0;
    for (auto it = v.begin(); it != v.end(); it++) {
        int r = 1e9;
        for (int j = 0; j < it->S.size(); j++)
            r = min(r,m[it->S[j].F]/it->S[j].S);
        if (r >= 1) d++;
    }
    cout << d << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
