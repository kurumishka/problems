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
    string a;
    int b,n;
    cin >> a >> b >> n;
    int l = a.size();
    for (int i = 0; i < 10; i++) {
        string tmp = to_string(i);
        tmp = a + tmp;
        if (stoi(tmp)%b == 0) {
            a+=to_string(i);
            break;
        }
    }
    if (l == a.size())
        cout << -1 << endl;
    else {
        for (int i = 0; i < n-1; i++) {
            a += "0";
        }
        cout << a << endl;
    }
    return 0;
}
