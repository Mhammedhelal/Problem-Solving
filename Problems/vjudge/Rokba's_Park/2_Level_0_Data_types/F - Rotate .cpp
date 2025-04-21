#include <iostream>
using namespace std;

int main()
{
    string num;
    cin>>num;
    int arr[3] = {num[0] - '0', num[1] - '0', num[2] - '0'};
    int sum = arr[0]*100 + arr[1]*10 + arr[2]
            + arr[1]*100 + arr[2]*10 + arr[0]
            + arr[2]*100 + arr[0]*10 + arr[1];
        cout<< sum<<"\n";

    return 0;
}