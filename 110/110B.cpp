#include <bits/stdc++.h>
using namespace std;
string abcd(int n)
{
    int c = n/4;
    int r = n%4;
    string temp;
    while(c--)
        temp += "abcd";
    char cu = 'a';
    while (r--)
    {
        temp += cu;
        cu++;
    }
    return temp;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cout << abcd(n) << "\n";
    return 0;
}