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
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (!m.count(tmp))
            m[tmp] = 1;
        else
            m[tmp]++;
    }
    int m_i = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second > m_i)
            m_i = it->second;
    }
    if (m_i-(n-m_i) > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
