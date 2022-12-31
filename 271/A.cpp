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
bool valid(int y)
{
    unordered_set<int> s;
    s.insert(y%10);
    y /= 10;
    for (int i = 0; i < 3; i++) {
        if (s.count(y%10))
            return false;
        else {
            s.insert(y%10);
            y/=10;
        }
    }
    return true;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    n++;
    while (!valid(n))
        n++;
    cout << n << endl;
    return 0;
}
