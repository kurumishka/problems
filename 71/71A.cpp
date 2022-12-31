#include<bits/stdc++.h>
typedef unsigned short us;
using namespace std;

int
main(void)
{
    us n; cin >> n;
    while (n--)
    {
        string temp; cin >> temp;
        if (temp.size() <= 10) {cout << temp << endl; continue; }
        cout << temp[0] << temp.size()-2 << temp[temp.size()-1] << endl;
    }

    return 0;
}
