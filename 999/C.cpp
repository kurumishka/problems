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

void solve() {
    int n, k;
    cin >> n >> k;
    map<char, int> l;
    string s;
    cin >> s;
    for (auto &x : s)
        l[x]++;
    map<char,int> res;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for (auto &x : a) {
        if (k >= l[x]) {
            k-=l[x];
            res[x] = l[x];
        }
        else {
            res[x] = k;
            break;
        }
    }
    string ans = string(n-k, ' ');
    auto pt = ans.begin();
    for (int i = 0; i < n; i++) {
        if (res[s[i]]) {
            res[s[i]]--;
            continue;
        }
        *pt = s[i];
        pt++;
    }
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
