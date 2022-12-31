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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int md = 1001;
    int j,k;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]-arr[i-1]) < md) {
            md = abs(arr[i]-arr[i-1]);
            j = i-1;
            k = i;
        }
    }
    if (abs(arr[n-1]-arr[0]) < md) { j = n-1; k = 0;}
    cout << j+1 << " " << k+1 << endl;
    return 0;
}
