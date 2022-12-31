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
    vector<vector<int>> ans;
    times
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v.pb(temp);
        }
        for (int i = 0; i < n; i++)
        {
            if (i+1 == n)
                break;

            if (v[i] < k) {
                k-=v[i];
                v[v.size()-1]+=v[i];
                v[i]=0;
            }
            else {
                v[i]-=k;
                v[v.size()-1]+=k;
                k=0;
            }
        }
        for (auto &x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
