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

    string s, ans; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i+1 != s.size()) {
            if (s[i] == '-' && s[i+1] == '.') {
                ans += '1';
                i++;
            }
            else if (s[i] == '-' && s[i+1] == '-') {
                ans += '2';
                i++;
            }
            else
                ans += '0';
        }
        else
            ans += '0';
    }
    cout << ans << endl;
    return 0;
}
