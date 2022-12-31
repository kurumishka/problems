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
    string s;
    cin >> s;
    int e = 0, z = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') e++;
        else z++;
    }
    if (z == 0)
        cout << 0 << endl;
    else if (e == 0)
        cout << 1 << endl;
    else {
        int ind = s.find('0');
        while (ind < s.size() && s[ind] != '1') ind++;
        bool ok = false;
        for (int i = ind; i < s.size(); i++) {
            if (s[i] == '0') {
                ok = true;
                break;
            }    
        }
        if (ok) cout << 2 << endl;
        else cout << 1 << endl;
    }
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
