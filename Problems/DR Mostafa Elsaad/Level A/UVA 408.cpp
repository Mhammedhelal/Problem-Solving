// 29755478
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int step, mod;
    while(cin>>step>>mod)
    {
        int arr[mod]={0};
        int last = 0;
        int seed;
        for(int i=1;i<mod;i++)
        {
            seed=(last+step)%mod;
            if(!(seed<mod&&seed>0))
            {
                cout << setw(10) << step << setw(10) << mod << "    Bad Choice\n\n";
                goto label1;
            }

            last=seed;
        }
        cout << setw(10) << step << setw(10) << mod << "    Good Choice\n\n";
        label1:;
    }

    return 0;
}
