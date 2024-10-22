#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int pass = 1999;
    int x;
    do
    {
        cin >> x;
        if (x == pass)
            cout << "Correct\n";
        else
            cout << "Wrong\n";
    } while (x != pass);

    return 0;
}
