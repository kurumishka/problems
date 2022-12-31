#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

int ps(string s) {
    if (s == "00") return 0;
    else {
        int r = 1;
        r = (s[0]-'0')*10+(s[1]-'0');
        return r;
    }
}

void solve() {
    string s;
    cin >> s;
    string last = string(2, ' ');
    if (last == "00" || ps(last)%25 == 0) {
        cout << 0 << endl;
        return;
    }
    auto l = s.rbegin();
    int n = 0;
    while(*l != '0' && l != s.rend()) {
        l++;
        n++;
    }
    if (l != s.rend()) {
        l++;
        string def = string(2,'0');
        def[0] = *l;
        while(l != s.rend() && ps(def)%25 != 0 && ps(def) != 0) {
            l++;
            n++;
            def[0] = *l;
        }
    }
    auto r = s.rbegin();
    int b = 0;
    while(*r != '5' && r != s.rend()) {
        b++;
        r++;
    }
    if (r != s.rend()) {
        r++;
        string def = string(2,'5');
        def[0] = *r;
        while(r != s.rend() && ps(def)%25 != 0 && ps(def) != 0) {
            r++;
            b++;
            def[0] = *r;
        }
    }
    cout << min(b,n) << endl;
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
