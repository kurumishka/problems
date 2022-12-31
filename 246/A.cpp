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
    vector<int> v (n);
    if (n <= 2) cout << -1 << endl;
    else {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}
