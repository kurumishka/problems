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

    times
    {
        string n; cin >> n;
        char ans = '0';
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] > ans)
                ans = n[i];
        }
        cout << ans << endl;
    }

    return 0;
}
