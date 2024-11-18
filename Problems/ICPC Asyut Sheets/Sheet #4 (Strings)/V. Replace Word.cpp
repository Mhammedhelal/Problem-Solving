#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string word;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
        }
        else
            cout << s[i];
    }

    return 0;
}