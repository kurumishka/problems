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
    int n; cin >> n;
    int arr[n];
    ll sum = 0;
    int o = 0, t = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 100) o++;
        else t++;
    }
    ll need = sum/2;
    need/=10;
    if (need%10 == 5 || (t%2 && n%2 && !o)) cout << "NO" << endl;
    else cout << "YES" << endl;
    


    return 0;
}
