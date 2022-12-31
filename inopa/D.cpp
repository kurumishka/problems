#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) continue;
        else if (s1[i] != s2[i]) {
            if (i+1 < n && s1[i+1] != s2[i+1] && s1[i] != s1[i+1])
                swap(s1[i], s1[i+1]);
            else 
                s1[i]=s2[i];
            ans++;
        }
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
