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
    int n, k;
    cin >> n >> k;
    vector<int> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int e = v[k-1];
    int s = 0;
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (j == -1 && v[i] == e)
            j = i;
        else if (j != -1 && v[i] != e)
            j = -1;
    }
    if (j == -1 || j > k-1)
        cout << -1 << endl;
    else {
        for (int i = j; i < n; i++) {
            s++;
        }
        cout << n-s << endl;
    }
    return 0;
}
