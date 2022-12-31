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
int colomn(int arr[], int l)
{
    int ans = 0, temp = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == 1)
        {
            ans+=temp;
            temp = 0;
        }
        else
            temp++;
    }
    temp = 0;
    for (int i = l-1; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            ans += temp;
            temp = 0;
        }
        else
            temp++;
    }
    return ans;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int arr[n][m], rra[m][n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++)
            rra[j][i] = arr[i][j];
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans+=colomn(arr[i], m);
    for (int i = 0; i < m; i++)
        ans+=colomn(rra[i], n);
    cout << ans << endl;

    return 0;
}
