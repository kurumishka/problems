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
    vector<int> v1, v2;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v1.pb(tmp);
    }
    sort(all(v1));
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        v2.pb(tmp);
    }
    sort(all(v2));
    reverse(all(v2));
    
    vector<int> ans;
    int mx = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v2[i]%v1[j] == 0) {
                int res = v2[i]/v1[j];
                ans.pb(res);
                if (res > mx) mx =res;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == mx) res++;
    }
    cout << res << endl;
    return 0;
} 
