// https://codeforces.com/contest/43/submission/279764028
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string goals[n];
    map<string, int> score;
    for (int i = 0; i < n; i++)
    {
        cin >> goals[i];
        if (score[goals[i]] == 0)
            score[goals[i]] = 1;
        else
            score[goals[i]]++;
    }

    int ma = score.begin()->second;
    string winner = score.begin()->first;
    for (auto myscore = score.begin(); myscore != score.end(); myscore++)
    {
        if (ma < myscore->second)
        {
            ma = myscore->second;
            winner = myscore->first;
        }
    }
    cout << winner;
}
