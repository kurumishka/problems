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

#define NO { cout << "NO" << endl; return; }

void solve() {
    string s1,s2;
    cin >> s1 >> s2;
    set<int> lets;
    map<char,int> ch;
    for (auto &x : s1) {
        ch[x]++;
        lets.insert(x);
    }
    auto pt = s1.begin();
    map<char,int> ch2;
    for (int i = 0; i < s2.size(); i++) {
        ch2[s2[i]]++;
        if (!lets.count(s2[i])) NO;
        if (*pt != s2[i]) NO;
        int ml = 1;
        while (pt != s1.end() && *pt == *(pt+1)) { ml++; pt++; }
        int c = i;
        while (c+1 < s2.size() && s2[c] == s2[c+1]) { ml--; c++; ch2[s2[c]]++; }
        if (ml > 1) NO;
        i = c;
        pt++;
    }
    if (pt != s1.end()) NO;
    for (auto &x : lets) {
        if (ch[x] > ch2[x]) NO;
    }
    cout << "YES" << endl;
} 

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
    solve();
    }
    return 0;
}
