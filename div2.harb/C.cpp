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
        string s; cin >> s;
        int fmax[10], smax[10], fmin[10], smin[10];

        if (s[0] == '1' || s[0] == '?') {
            fmax[0] = 1;
            fmin[0] = (s[0] == '1') ? 1 : 0;
        }
        else {
            fmax[0] = fmin[0] = 0;
        }
        smax[0] = smin[0] = 0;

        for (int i = 1; i < 10; i++) {
            if (i%2) {
                smax[i] = (s[i] == '1' || s[i] == '?') ? smax[i-1]+1 : smax[i-1];
                smin[i] = (s[i] == '0' || s[i] == '?') ? smin[i-1] : smin[i-1]+1;
                fmax[i] = fmax[i-1];
                fmin[i] = fmin[i-1];
            } else {
                fmax[i] =  (s[i] == '1' || s[i] == '?') ? fmax[i-1]+1 : fmax[i-1];
                fmin[i] =  (s[i] == '0' || s[i] == '?') ? fmin[i-1] : fmin[i-1]+1;
                smin[i] = smin[i-1];
                smax[i] = smax[i-1];
            }
        }

        int ans = 0;
        for (int i = 0; i < 10; i++) {
            if (fmax[i] > smin[i] && fmax[i]-smin[i] > (9-(i+1))/2+1) {
                ans = i+1;
                break;
            }
            else if (smax[i] > fmin[i] && smax[i]-fmin[i] > (10-(i+1))/2) {
                ans = i+1;
                break;
            }
        }
        if (ans == 0) ans = 10;
        cout << ans << endl;
    }
    return 0;
}
