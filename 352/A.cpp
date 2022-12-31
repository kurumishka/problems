#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int f = 0, z = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 5) f++;
        else z++;
    }
    if (f/9 == 0 || !z) {
        if (z) cout << 0 << endl;
        else cout << -1 << endl;
    }
    else {
        string ans = string();
        for (int i = 0; i < f/9; i++)
            ans += "555555555";
        for (int i = 0; i < z; i++)
            ans += "0";
        cout << ans << endl;
    }
    return 0;
}
