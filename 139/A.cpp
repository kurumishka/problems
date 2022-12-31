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
    int arr[7];
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    int i = 0;
    while (n > 0) {
        if (i == 7) i = 0;
        n-=arr[i];
        i++;
    }
    cout << i << endl;
    return 0;
}
