#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    string p;
    getline(cin,p);
    stringstream ss(p);
    vector<char> result;
    int num;
    while(ss>>num){
        if(num>=1&&num<=26){
            result.push_back('a'+num-1);
        }
    }

    cout<<string(result.begin(), result.end());

    return 0;
}