#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int gradebook[n][m];
    int maxScore[m] = {0};
    string input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            gradebook[i][j] = (int)(input[j] - '0');
            if (gradebook[i][j] > maxScore[j])
                maxScore[j] = gradebook[i][j];
        }
    }

    int succ = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (gradebook[i][j] == maxScore[j])
            {
                succ++;
                break;
            }
        }
    }
    cout << succ;

    return 0;
}