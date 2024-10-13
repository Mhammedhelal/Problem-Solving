// 29789513
#include <bits/stdc++.h>
using namespace std;

int n;
char grid[25][25];
bool seen[25][25];
bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};
void dfs(int i, int j)
{
    if (seen[i][j])
        return;
    seen[i][j] = 1;
    for (int k = 0; k < 8; ++k)
    {
        int xc = dx[k] + i;
        int yc = dy[k] + j;
        if (valid(xc, yc) && !seen[xc][yc] && grid[xc][yc] == '1')
            dfs(xc, yc);
    }
}

int main()
{
    int tc = 1;
    while (cin >> n && n != EOF)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                seen[i][j] = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (!seen[i][j] && grid[i][j] == '1')
                {
                    dfs(i, j);
                    ++ans;
                }
            }
        }
        cout << "Image number " << tc++ << " contains " << ans << " war eagles.\n";
    }

    return 0;
}
