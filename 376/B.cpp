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
#define V(T) vector<T>
#define US(T) unordered_set<T>
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
V(char) v;
V(V(char)) ans, res;

bool check(V(char) &r, int p, int m) {
    int lp = 0,lm = 0;
    for (int i = 0; i < r.size(); i++) {
        if (r[i] == '+') lp++;
        else lm++;
        if (lp > p || lm > m) return false;
    }
    return (lp == p && lm == m);
}

void gen(int id, int n, int p, int m) {
    if (id == n) {
        if (check(v, p, m))
            ans.pb(v);
        res.pb(v);
        return;
    }

    for (int i = 0; i < 2; i++) {
        v[id] = (i == 0) ? '+' : '-';
        gen(id+1, n, p, m);
    }
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    pair<int, int> v1 = {0,0}, v2 = {0,0};
    int ques = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') v1.F++;
        if (s2[i] == '+') v2.F++;
        if (s1[i] == '-') v1.S++;
        if (s2[i] == '-') v2.S++;
        if (s2[i] == '?') ques++;
    }
    int pd = v1.F-v2.F, md = v1.S-v2.S;
    double nul = 0, ed = 1;
    if (pd < 0 || md < 0)
        FIXED(nul);
    else if (pd == 0 && md == 0)
        FIXED(ed);
    else if (pd+md < ques)
        FIXED(nul);
    else {
        v = V(char) (ques);
        gen(0, ques, pd, md);
        double a = (double)ans.size()/res.size();
        FIXED(a);
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
