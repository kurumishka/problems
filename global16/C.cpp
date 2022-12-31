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
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    bool dop = false;
    for (int i = 0; i < n; i++) {
        if (s1[i] == '1' && s2[i] == '1') {
            dop = true;
            continue;
        }
        else if ((s1[i] == '0' || s2[i] == '0') && dop) {
            dop = false;
            ans+=2;
            continue;
        }
        else if ((s1[i] == '0' || s2[i] == '0') && !dop) {
            if (s1[i] != s2[i]) ans+=2;
            else {
                if (i+1 != n) {
                    if (s1[i+1] == '1' && s2[i+1] == '1') {
                        i++;
                        ans += 2;
                    }
                    else
                        ans++;
                }
                else
                    ans++;
            }
        }
    }
    cout << ans << endl;
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
