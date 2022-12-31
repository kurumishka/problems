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
    int l = 0, c = 0;
    for (char x : s) {
        if (x == tolower(x)) l++;
        else if (x == toupper(x)) c++;
    }
    if (c > l)
        for (int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
    else
        for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    cout << s << endl;
    return 0;
}
