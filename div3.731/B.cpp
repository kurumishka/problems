#include <bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >>t;
    while(t--)
    {
        string ss; cin >> ss;
        string al = "abcdefghijklmnopqrstuvwxyz";

        int c_l = ss.size()-1;
        int step = ss.size()-1;
        int c_d = 0;
        int ok = 0;
        int no = false;
        while (ok < ss.size())
        {
            if (ss[c_l] == al[step])
            {
                step--;
                c_l--;
                ok++;
            }
            else if (ss[c_d] == al[step])
            {
                c_d++;
                ok++;
                step--;
            }
            else
            {
                no = true;
                break;
            }
        }
        if (no)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
