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
    string s1 = string(), s2 = string();

    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        s1.pb(c);
    }
    while ((c = getchar()) != '\n' && c != EOF) {
        s2.pb(c);
    }
    map<char, int> m1, m2;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == ' ') continue;
        if (!m1.count(s1[i]))
            m1[s1[i]] = 1;
        else
            m1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == ' ') continue;
        if (!m2.count(s2[i]))
            m2[s2[i]] = 1;
        else
            m2[s2[i]]++;
    }
    bool failed = false;
    for (auto it = m2.begin(); it != m2.end(); it++) {
        if (m1[it->first] < it->second) {
            failed = true;
            break;
        }
    }
    if (failed)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
