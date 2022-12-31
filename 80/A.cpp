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
    vector<int> v = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271};
    int n, m; cin >> n >> m;
    auto it = v.begin();
    for (; it != v.end(); it++) {
        if (*it == m) break;
    }
    if (it == v.end())
        cout << "NO" << endl;
    else {
        auto nit = v.begin();
        for (; nit != v.end(); nit++) {
            if (*nit == n) break;
        }
        if (*(nit+1) != *it)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
