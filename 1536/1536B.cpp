#include <bits/stdc++.h>
using namespace std;
#define loop(zero, v) for (int i = zero; i < v; i++)

bool call(string& a, string& b)
{
    if (a.size() > b.size())
        return false;
    else if (a.size() == b.size())
        return a < b;
    else
        return true;
}

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string alph = "abcdefghijklmnopqrstuvwxyz";
    vector<string> subs;

    loop(0, 26)
    {
        char curr = alph[i];
        string _t = string();
        _t += curr;
        subs.push_back(_t);
        for (int j = 0; j < 26; j++)
        {
            string temp = string();
            temp += (_t + alph[j]);
            subs.push_back(temp);
            for (int k = 0; k < 26; k++)
            {
                string temp1 = string();
                temp1 += (temp + alph[k]);
                subs.push_back(temp1);
            }
        }
    }
    sort(subs.begin(), subs.end(), call);

    ui t; cin >> t;
    while (t--)
    {
        ui n; cin >> n;
        string s; cin >> s;

        loop(0, 26*26*26)
        {
            int result = s.find(subs[i]);
            if (result == -1)
            {
                cout << subs[i] << "\n";
                break;
            }
        }
    }
    return 0;
}
