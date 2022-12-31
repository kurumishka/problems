#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string old = string();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            old.insert(old.end(), s.begin()+i+1, s.end());
            break;
        }
        else
            old.pb(s[i]);
    }
    if (old.size() == s.size()) old.pop_back();
    cout << old << endl;
    return 0;
}
