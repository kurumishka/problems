#include <bits/stdc++.h>
using namespace std;

string
build_string(int n)
{
    string temp;
    int s = 0;
    for (int i = 0; i < n*2+1; i++)
    {
        temp.push_back('0'+s);
        if (i < n)
            s++;
        else
            s--;
        if (i != n*2)
            temp.push_back(' ');
    }
    return temp;
}

string
get_s(int n)
{
    string s;
    for (int i = 0; i < n; i++)
        s.push_back(' ');
    return s;
}

int
main(void)
{
    int n, s; cin >> n;
    s = 0;
    string r;
    int spaces = n*2;
    for (int i = 0; i < n*2+1; i++)
    {
        r += get_s(spaces);
        r += build_string(s);
        if (i != n*2)
            r.push_back('\n');
        if (i < n)
        {
            spaces -= 2;
            s++;
        }
        else
        {
            spaces += 2;
            s--;
        }
    }
    cout << r << endl;
}
