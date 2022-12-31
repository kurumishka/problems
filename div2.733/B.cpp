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

string sform(int n, int m, int a)
{
    string res = string();
    if (a == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i%2)
                res += '0';
            else
                res += '1';
        }
    }
    else if (a == 2)
    {
        for (int i = 1; i < m; i++)
        {
            if (!(i%2))
                res += '1';
            else
                res += '0';
        }
    }
    else if (a == 3)
    {
        for (int i = 1; i < n; i++)
        {
            if (!(i%2) && i)
                res += '1';
            else
                res += '0';
        }
    }
    else if (a == 4)
    {
        for (int i = 1; i < m-1; i++)
        {
            if (!(i%2) && i+1 != m-1)
                res +='1';
            else
                res +='0';
        }
    }
    return res;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    times
    {
        int n,m; cin >> m >> n;
        string ans = string();
        
        string f1 = sform(n,m,1);
        string f2,f3,f4;
        f2 = sform(n,m,2);
        f3 = sform(n,m,3);
        f4 = sform(n,m,4);
        cout << f1 << endl;
        string zero = string();
        for (int i = 1; i < n-1; i++)
            zero += '0';
        for (int i = 1; i < m-1; i++)
        {
            cout << f4[f4.size()-i] << zero << f2[i-1] << endl;
        }
        reverse(all(f3));
        cout << f3 << f2[f2.size()-1] << endl;
        cout << endl;

    }

    return 0;
}
