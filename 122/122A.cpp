#include <bits/stdc++.h>
using namespace std;

#define loop(name, zero, v) \
for (int name = zero; name < v; name++)

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> shit, fs = {"4", "7"};
    loop(i,0,2)
    {
        shit.push_back(fs[i]);
        loop(j,0,2)
        {
            string temp = fs[i];
            temp += fs[j];
            shit.push_back(temp);
            loop(k,0,2)
            {
                string temp2 = temp;
                temp2 += fs[k];
                shit.push_back(temp2);
            }
        }
    }

    int n; cin >> n;
    loop(i,0, shit.size())
    {
        if (!(n % stoi(shit[i])))
        {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}
