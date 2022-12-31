#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll am = 0;
    ll k25 = 0, k50 = 0;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        if (m-25 > am) {
            ok = false;
            break;
        }
        if (m == 100) {
            if (k25 >= 1 && k50 >= 1) {
                k50--;
                k25--;
            }
            else if (k25 >= 3) {
                k25-=3;
            }
            else {
                ok = false;
                break;
            }
            am+=25;
        }
        else if (m == 50) {
            if (k25 >= 1) {
                k25--;
                k50++;
                am+=25;
            }
            else {
                ok = false;
                break;
            }
        }
        else {
            am+=25;
            k25++;
        }
    }
    cout << ((ok) ? "YES" : "NO") << endl;
    return 0;
}
