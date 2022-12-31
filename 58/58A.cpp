#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i<v;i++)

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    vector<char> cs;
    int l = 0;
    loop(0,s.size())
    {
        if (s[i] == 'h' && !cs.size())
        {
            cs.push_back('h');
            continue;
        }

        if (!cs.size()) continue;


        else if (s[i] == 'e' && cs.back() == 'h')
            cs.push_back('e');
        else if (s[i] == 'l' && (cs.back() == 'e' || l == 1))
        {
            cs.push_back('l');
            l++;
        }
        else if (s[i] == 'o' && cs.back() == 'l' && l == 2)
            cs.push_back('o');
        else
            continue;
    }

    string result = string();
    loop(0, cs.size())
        result += cs[i];

    if (result == "hello")
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
