// https://codeforces.com/contest/287/submission/276359724
#include <bits/stdc++.h>
using namespace std;

char squ[4][4];
bool test(int i, int j)
{
    if (i + 1 == 4 || j + 1 == 4)
        return false;

    return squ[i][j] == squ[i][j + 1] && squ[i][j] == squ[i + 1][j] && squ[i][j] == squ[i + 1][j + 1];
}
bool test()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            if (test(i, j))
                return true;
    }
    return false;
}
int main()
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> squ[i][j];

    bool flag = test();

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char origin = squ[i][j];

            if (squ[i][j] == '.')
                squ[i][j] = '#';
            else
                squ[i][j] = '.';

            if (test())
                flag = true;

            squ[i][j] = origin;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
