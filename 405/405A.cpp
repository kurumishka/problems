#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}