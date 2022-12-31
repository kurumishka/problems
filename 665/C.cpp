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

void solve() {
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            s[i] = (s[i] == 'z') ? s[i] - 2 : s[i] + 1;
            if (i+1 != s.size() && s[i] == s[i+1])
                s[i] = (s[i] == 'z') ? s[i] - 3: s[i] + 1;
        }
    }
    cout << s << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
