#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+= (i%2==0)? arr[i] : arr[i]-1;
    }

    (sum<=x)?  cout<<"Yes\n" : cout<<"No\n";

    return 0;
}