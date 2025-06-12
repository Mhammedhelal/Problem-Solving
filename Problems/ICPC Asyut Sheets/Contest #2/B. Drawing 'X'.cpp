#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1, y = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n % 2 != 0 && i == (n / 2) + 1 && j == (n / 2) + 1)
                cout << 'X';
            else
            {
                if (j == x)
                    cout << '\\';
                else if (j == y)
                    cout << '/';
                else
                    cout << '*';
            }
        }
        x++;
        y--;
        cout << endl;
    }

    return 0;
}