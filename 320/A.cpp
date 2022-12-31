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
    string s; cin >> s;
    bool good = true;
    char ch;
    int f = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0 && s[i] != '1') {
            good = false;
            break;
        } else if (i == 0) {
            ch = '1';
            continue;
        }

        if (s[i] == '1') {
            if (ch == '4') {
                f = 0;
            }
            ch = '1';
        } else if (s[i] == '4') {
            if (f+1 >= 3) {
                good = false;
                break;
            } else {
                f++;
            }
            ch = '4';
        } else {
            good = false;
            break;
        }
    }
    if (good) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
