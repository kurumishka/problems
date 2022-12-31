#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(20) << x << endl
#define V(T) vector<T>
#define double long double
bool next_combination (vector<int> & a, int n) {
 int k = (int)a.size();
 for (int i=k-1; i>=0; --i)
  if (a[i] < n-k+i+1) {
   ++a[i];
   for (int j=i+1; j<k; ++j)
    a[j] = a[j-1]+1;
   return true;
  }
 return false;
}


void solve() {
    int n,k,r,t;
    cin >> n >> k >> r >> t;
    V(int) v(n+2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    v[0] = 0;
    v.back()=0;
    map<pair<int,int>, double> s;
    for (int i = 1; i <= n+1; i++) {
        double y = abs(v[i]-v[i-1]);
        double res = sqrt((double)pow(y,2)+1);
        s[{i-1,i}] = res;
    }
    V(int) a(n+2);
    for (int i = 0; i < n+2; i++)
        a[i] = i;
    double ans = 0;
    do {
        double d = 0;
        map<pair<int,int>,int> tr;
        for (int i = 1; i <= k; i++) { 
            for (int g = i; g > 0 && g >= i-r; g--)
                tr[{g,g-1}]++;
            for (int g = i; g < n+1 && g <= i+r; g++)
                tr[{g,g+1}]++;
        }
        for (auto it = tr.begin(); it != tr.end(); it++)
            if (it->second >= t) d+=s[it->first]; 
        ans = max(ans,d);
    }while(next_combination(a,k));
    FIXED(ans);
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
