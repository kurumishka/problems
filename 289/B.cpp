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
int steps(int x, int n, int d) {
    int diff = abs(x-n);
    if (diff%d) return -1;
    else return diff/d;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            v.pb(temp);
        }
    }

    int len = v.size();
    int sum[len];
    sort(all(v));
    for (int i = 0; i < len; i++) {
        int cur = v[i];
        for (int j = 0; j < len; j++) {
            int s = steps(v[j], cur, d);
            if (s == -1) {
                sum[i] = -1;
                break;
            }
            if (j == 0)
                sum[i] = s;
            else
                sum[i] += s;
        }
    }

    ll _min = 1000000000;
    for (int i = 0; i < len; i++) {
        if(sum[i] < _min && sum[i] != -1) _min = sum[i];
    }
    if (_min == 1000000000)
        cout << -1 << endl;
    else
        cout << _min << endl;
    return 0;
}
