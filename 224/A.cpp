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
int _max(int a, int b, int c) { return max(max(a,b),c);}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << ((int)sqrt(a))*12 << endl;
    else if (a == b || b == c || c == a) {
        vector<int> v = {a, b, c};
        sort(all(v));
        if (v[0] == v[1]) {
             int s = sqrt(v[2]);
             cout << (s+s+v[0]/s)*4 << endl;
        }
        else {
            int s = sqrt(v[0]);
            cout << (s*2+v[2]/s)*4 << endl;
        }
    }
    else {
        vector<int> divs, v = {a,b,c};
        sort(all(v));
        for (int i = 1; i <= v[2]; i++) {
            if (!(v[2]%i)) divs.pb(i);
        }
        for (int i = 0; i < divs.size(); i++) {
            int side1 = v[2]/divs[i];
            int side2 = v[2]/side1;
            if (v[0]/side1 == v[1]/side2) {
                cout << (side1 + side2 + v[0]/side1)*4 << endl;
                return 0;
            } else if (v[1]/side1 == v[0]/side2) {
                cout << (side1 + side2 + v[0]/side2)*4 << endl;
                return 0;
            }
        }
    }
    return 0;
}
