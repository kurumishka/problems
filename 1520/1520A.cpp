#include <bits/stdc++.h>
using namespace std;
typedef map<char, bool> mcb;
typedef map<char, bool>::iterator iter;

#define loop(zero, v) for (int i = zero; i < v; i++)

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        short n; cin >> n;
        string s; cin >> s;
        mcb dict;
        bool state = true;
        char current = '0';
        loop(0, n)
        {
            if (!dict.count(s[i]))
            {
                dict[s[i]] = true;
                current = s[i];
                continue;
            }
            else if (current != s[i])
                {state = false; break;}
            else
                continue;
        }
        if (state)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
