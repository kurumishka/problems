#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    string s, temp; cin >> s;
    vector<char> chars = {'a', 'o', 'y', 'e', 'u', 'i'};

    bool state;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);

        state = false;
        for (int j = 0; j < chars.size(); j++)
            if (chars[j] == s[i])
                { state = true; break; }

        if (state)
            continue;
        else
        {
            temp.push_back('.');
            temp.push_back(s[i]);
        }
    }
    cout << temp << endl;
}
