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
        int n; cin >> n;
        int temp, r = 0;
        fr(i, 0, n)
        {
            cin >> temp;
            if (temp == 3 || temp == 1)
                r++;
        }
        cout << r << endl;
    }
    return 0;
}
