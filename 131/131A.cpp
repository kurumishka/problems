#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i < v; i++)

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    bool f,se;
    f = se = false;
    loop(0, s.size())
    {
        if (!i && s[0] == toupper(s[0]))
        {
            f = true;
            break;
        }
        else if (!i && s[0] == tolower(s[0]))
        {
            se = true;
            break;
        }
    }

    if (!f && !se)
    {
        cout << s << "\n";
        return 0;
    }
    string temp = string();
    if (f)
    {
        loop(0, s.size())
        {
            if (!i)
                temp += tolower(s[i]);
            else
            {
                if (tolower(s[i]) == s[i])
                {
                    cout << s << "\n";
                    return 0;
                }
                else
                    temp += tolower(s[i]);
            }
        }
    }

    else
    {
        loop(0, s.size())
        {
            if (!i)
            {
                temp += toupper(s[i]);
            }
            else
            {
                if (tolower(s[i]) == s[i])
                {
                    cout << s << "\n";
                    return 0;
                }
                else
                    temp += tolower(s[i]);
            }
        }
    }
    cout << temp << "\n";
    return 0;
}
