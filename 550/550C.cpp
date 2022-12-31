#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

int
main(void)
{
    string s; cin >> s;

    vector<string> subst = \
    {"16", "24", "32", "56", "64", "72", "96",\
    "112", "136", "144", "152", "176", "192", \
    "312", "336", "344", "352", "376", "392", \
    "512", "536", "544", "552", "576", "592", \
    "712", "736", "744", "752", "776", "792", \
     "912", "936", "944", "952", "976", "992"};

    for (char x : s)
    {
        if (x == '0' || x == '8')
        {
            YES;
            cout << x << "\n";
            return 0;
        }
    }

    for (string curr : subst)
    {
        int ind = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == curr[ind])
                ind++;
            if (ind == curr.size())
            { YES; cout << curr << "\n"; return 0;}
        }
    }
    NO;

    return 0;
}