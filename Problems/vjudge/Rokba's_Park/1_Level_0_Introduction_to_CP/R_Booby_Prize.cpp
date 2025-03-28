#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maximum = arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>maximum)  maximum = arr[i];

    int prize = -1, j = -1;
    for(int i=0;i<n;i++)
        if(arr[i] < maximum && arr[i] > prize)   {prize=arr[i];   j=i;}

    if (j == -1)  
        cout << "-1" << endl;
    else
        cout << j + 1 << endl;  
}