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
    int n, k;
    cin >> n >> k;
    unordered_set<int> us;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        for (int j = a; j <= b; j++) {
            us.insert(j);
        }
    }
    int need = 0;
    int h = us.size();
    while (h%k) {h++;need++;}
    cout << need << endl;
    return 0;
}
