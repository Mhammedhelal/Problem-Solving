// 29797812
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        char grid[m][n];
        vector<string> ans;
        pair<int, int> st;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '@')
                    st = {i, j};
            }
        }
        int i = st.first, j = st.second;
        string s = "IEHOVA#";
        int index = 0;
        while (grid[i][j] != '#')
        {
            if (grid[i][j + 1] == s[index])
            {
                ans.push_back("right");
                j++;
            }
            else if (grid[i][j - 1] == s[index])
            {
                ans.push_back("left");
                j--;
            }
            else if (grid[i - 1][j] == s[index])
            {
                ans.push_back("forth");
                i--;
            }
            index++;
        }
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++)
            cout << " " << ans[i];
        cout << endl;
    }

    return 0;
}
