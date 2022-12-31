#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str; cin >> str;
    map<char, long long int> d;
    map<char, long long int>::iterator mit;
    for (long long int i = 0; i < str.size(); i++)
    {
        mit = d.find(str[i]);
        if (mit != d.end())
            mit->second++;
        else
            d[str[i]] = 1;
    }

    long long int r = 0;
    mit = d.begin();
    while (mit != d.end())
    {
        r+= (mit->second * mit->second);
        mit++;
    }

    cout << r << "\n";

    return 0;
}
