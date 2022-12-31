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
    map<string, int> ms;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if (!ms.count(tmp)) ms[tmp] = 1;
        else ms[tmp]++;
    }
    string ans;
    int m = 0;
    for (auto it = ms.begin(); it != ms.end(); it++) {
        if (it->second > m) {
            ans = it->first;
            m = it->second;
        }
    }
    cout << ans << endl;
    return 0;
}
