#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
   string a,b,s;
   cin >> a >> b;
   for (int i = 0; i < a.size(); i++) {
        string temp = string();
        for (int j = i; j < a.size(); j++) {
            temp += a[j];
            if (b.find(temp) != string::npos && temp.size() > s.size())
                s = temp;
        }
   }
   int len = a.size()+b.size();
   len -= s.size()*2;
   cout << len << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
     solve();
    }
    return 0;
}
