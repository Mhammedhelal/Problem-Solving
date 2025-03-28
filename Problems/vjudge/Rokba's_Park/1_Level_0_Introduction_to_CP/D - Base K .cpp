#include<iostream>
using namespace std;

long long todecimal(long long n, long long b)
{
    long long res = 0;
    long long exp = 1;
    while(n)
    {
        res+= exp * (n % 10);
        n/=10;
        exp*=b;
    }
    return res;
}
int main()
{
    long long k,a,b;
    cin>>k>>a>>b;

    cout<<todecimal(a,k)*todecimal(b,k);
    
    return 0;
}