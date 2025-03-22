#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    string contests[] = {"ABC", "ARC", "AGC",  "AHC"};
    unordered_set<string> found;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    found.insert(s1);
    found.insert(s2);
    found.insert(s3);

    for(auto s: contests)
    {
        if(found.count(s)==0)
        {
            cout<<s;
            break;
        }
    }

    return 0;
}