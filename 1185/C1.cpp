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
    int n, m;
    cin >> n >> m;
    V(int) v(n), sum(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum[i] = (i == 0) ? v[i] : v[i]+sum[i-1];
    }
    for (int i = 0; i < n; i++) {
        if (sum[i] <= m) cout << 0 << " ";
        else {
            V(int) temp = v;
            int ans = 0, lsum = sum[i];
            sort(temp.begin(), temp.begin()+i, REV);
            for (int j = 0; j < i; j++) {
                if (lsum <= m) {
                    break;
                }
                else {
                    lsum-=temp[j];
                    ans++;
                }
            }
            cout << ans << " ";
        }
    }
    cout << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
