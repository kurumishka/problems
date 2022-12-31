#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define V(T) vector<T>
#define US(T) unordered_set<T>

inline void out(int m) {
    cout << m << endl;
}

void solve() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (m.count(temp)) m[temp]++;
        else m[temp] = 1;
    }
    int max_e = 0, max_c = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second > max_c) {
            max_e = it->first;
            max_c = it->second;
        }
    }
    if (max_c < m.size()) 
        out(max_c);
    else if (max_c > m.size())
        out(m.size());
    else 
        out(max_c-1);
}

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
        solve();
    }
    return 0;
}
