#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

set<char> g = {'0','1','2','3','4','5','6','7','8','9'};

string res(string &s) {
    int t = 0, j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (g.count(s[i])) {
            if (t == 0)
                t = s[i]-'0';
            else {
                t*=10;
                t+=(s[i]-'0');
            }
        }
        else {
            j = i;
            break;
        }
    }
    if (t == 0) t = 1;
    int sz = (s.size()-j)*t;
    string ans = string(sz, ' ');
    auto it = ans.begin(), rit = s.begin()+j;
    while(it != ans.end()) {
        *it = *rit;
        rit++;
        if (rit == s.end()) rit = s.begin()+j;
        it++;
    }
    return ans;
}

string parse(string &s) {
    string tp = string(), ans = string();
    int bal = 0;
    auto it = s.begin();
    int c = 0;
    while(it!=s.end()) {
        if (*it == ')' || *it == '(') c++;
        it++;
    }
    if (c == 0)
        return res(s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            bal++;
            if (bal == 1) continue;
        }
        else if (s[i] == ')') bal--;
        if (bal) {
            tp.pb(s[i]);
            continue;
        }
        if (bal == 0 && tp.size()) {
            ans+=parse(tp);
            tp.clear();
        }
        else if (bal == 0)
            ans+=s[i];
    }
    return res(ans);
}

void solve() {
    string s;
    cin >> s;
    cout << parse(s) << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
