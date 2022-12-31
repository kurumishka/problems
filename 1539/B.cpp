#include <iostream>
 
using namespace std;
 
 
char _cast(char c) { return (char)(c-96); }
 
int
main(void)
{
    
    unsigned int n,q,r,l; cin >> n >> q;
    long long int arr[n];
    string s; cin >> s;
 
    arr[0] = (s[0] - 96);
 
    for (int i = 1; i < n; i++)
        arr[i] = arr[i-1] + (s[i] - 96);
 
    while (q--)
    {
        cin >> l >> r;
        cout << arr[r-1]-(l-1 ? arr[l-2] : 0) << endl;
    }
    return 0;
}
