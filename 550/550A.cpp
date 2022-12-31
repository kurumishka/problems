#include <bits/stdc++.h>
using namespace std;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

int
main(void)
{
    string s; cin >> s;

    if (s.size() < 4)
    { NO; return 0; }

    vector<string> subst;
    string temp;

    for (int i = 0; i < s.size(); i++)
    {
        if (i+1 != s.size())
        {
            temp = string();
            temp += s[i];
            temp += s[i+1];
            subst.push_back(temp);
        }
    }

    int same = 0;
    int AB, BA;
    AB = BA = 0;
    for (int i = 0; i < subst.size(); i++)
    {
        if (subst[i] == "AB")
        {
            AB++;
            if (i+1 != subst.size() && subst[i+1] == "BA")
            {
                same++;
                BA++;
                i+=2;
                continue;
            }
        }
        else if (subst[i] == "BA")
        {
            BA++;
            if (i+1 != subst.size() && subst[i+1] == "AB")
            {
                same++;
                AB++;
                i+=2;
                continue;
            }
        }
    }

    if (BA == 1 && AB == 1 && !same)
        YES;
    else if (!BA || !AB)
        NO;
    else if (AB == 1 && BA == 1 && same == 1)
        NO;
    else
        YES;

    return 0;
}