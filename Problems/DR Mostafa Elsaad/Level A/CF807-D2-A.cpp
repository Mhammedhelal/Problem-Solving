// https://codeforces.com/contest/807/submission/279763343
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b;
    int res = 2; // 0: unrated  1: rated  2: maybe
    int mi=INT_MAX;
    while(n--)
    {
        cin>>a>>b;
        if(a!=b)
            res=1;
        else
        {
            if(a<mi)
                mi=a;
            if(a>mi&&res!=1)
                res=0;
        }
    }
    switch(res)
    {
        case 0: cout<<"unrated";break;
        case 1: cout<<"rated";break;
        case 2: cout<<"maybe";break;
    }

    return 0;
}
