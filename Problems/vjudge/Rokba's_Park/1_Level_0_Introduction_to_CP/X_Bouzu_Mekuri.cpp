#include<iostream>
using namespace std;


int main()
{
    int n;
    string s;
    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(i%2==0)  cout<<"Takahashi\n";
            else cout<<"Aoki\n";
            break;
        }
    }
    return 0;
}