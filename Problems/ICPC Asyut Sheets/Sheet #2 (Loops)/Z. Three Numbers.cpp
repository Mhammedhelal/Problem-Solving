#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int counter = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int z = 0; z <= k; z++)
        {
            if (s - i - z >= 0 && s - i - z <= k)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;

    return 0;
}
