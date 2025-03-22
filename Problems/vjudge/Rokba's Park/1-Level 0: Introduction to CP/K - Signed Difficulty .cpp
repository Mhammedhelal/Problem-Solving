#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    float x;
    cin>>x;
    float y = (x - (int)x) * 10.0;

    if(y<=2)cout<<(int)x<<"-";
    else if(y<=6) cout<<(int)x;
    else cout<<(int)x<<"+";

    return 0;
}