// https://codeforces.com/contest/768/submission/281062462
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    int count=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[0]<arr[i]&&arr[n-1]>arr[i])
            count++;
    }
    cout<<count;

    return 0;
}