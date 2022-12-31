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
    string ss; cin >> ss;
    string ans = string();
    bool state = false;
    for (int i = 0; i < n; i++)
    {
        if (i+2 != n && ss[i] == 'o' && ss[i+1] == 'g' && ss[i+2] == 'o' && !state)
        {
            state = true;
            i+=2;
            if (i+1 == n)
            {
                ans += "***";
                state = false;
                break;
            }
            continue;
        }
        if (state && i+1 != n && ss[i] == 'g' && ss[i+1] == 'o')
        {
            i++;
            if (i+1 == n)
            {
                ans += "***";
                state = false;
                break;
            }
        }

        else if (state)
        {
            ans += "***";
            state = false;
            i--;
        }
        else
            ans+=ss[i];
    }
    cout << ans << endl;

    return 0;
}
