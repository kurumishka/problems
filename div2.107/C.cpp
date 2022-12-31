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

    int n, q; cin >> n >> q;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
    }
    vector<int> vq;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        vq.pb(temp);
    }

    vector<int> ans, ins;
    int cur;
    for (int i = 0; i < q; i++)
    {
        cur = vq[i];
        ins.clear();
        int temp;
        for (int j = 0; j < n; j++)
        {
            if (!j)
            {
                if (v[j] == cur)
                {
                    ans.pb(j+1);
                    break;
                }
                temp = v[0];
                continue;
            }
            if (v[j] == cur)
            {
                ans.pb(j+1);
                v[0] = v[j];
                v[j] = temp;
                break;
            }
            int r = v[j];
            v[j] = temp;
            temp = r;
        }
    }
    for (int &x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
