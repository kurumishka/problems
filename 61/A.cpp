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
    string s1, s2;
    cin >> s1; cin >> s2;
    bitset<128> bs1(s1), bs2(s2), res;
    res = bs1 ^ bs2;
    string res_s = res.to_string();
    string ans = string();
    for (int i = res_s.size()-1; i >= res_s.size()-s1.size(); i--)
        ans += res_s[i];
    reverse(all(ans));
    cout << ans << endl;
    return 0;
}
