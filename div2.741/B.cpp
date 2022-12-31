#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define US(T) unordered_set<T>

V(bool) e(101, true);

void gen() {
    for (int i = 2; i*i <= 100; i++) {
        if (!e[i]) continue;
        for (int j = i*i; j < 100; j+=i)
            e[j] = false;
    }
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> v = {'1', '4', '6', '8', '9'};
    for (int i = 0; i < n; ++i) {
        if (v.count(s[i])) {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
       string r = string();
       r += s[i];
       for (int j = i+1; j < n; j++) {
            r.pb(s[j]);
            if (!e[stoi(r)]) {
                cout << 2 << endl;
                cout << r << endl;
                return;
            }
            r.pop_back();
       }
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    gen();
    times
    {
    solve();
    }
    return 0;
}
