#include<iostream>
using namespace std;

int main()
{
    string X;
    cin>>X;
    if(X[0]==X[1]&&X[1]==X[2]&&X[2]==X[3]) cout<<"Weak\n";
    else
    {
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(X[i+1]==X[i]+1 || (X[i]=='9'&&X[i+1]=='0'))  count++;
        }

        (count==3)? cout<<"Weak\n":cout<<"Strong\n";
    }
    

    return 0;
}