#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int q;
    cin >> q >> s;
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (q == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < Original.size(); j++)
            {
                if (s[i] == Original[j])
                    cout << Key[j];
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < Key.size(); j++)
            {
                if (s[i] == Key[j])
                    cout << Original[j];
            }
        }
    }

    return 0;
}