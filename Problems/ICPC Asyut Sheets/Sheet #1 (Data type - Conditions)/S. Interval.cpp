#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;
    if (x > 100 || x < 0)
        cout << "Out of Intervals";
    else
    {
        cout << "Interval ";
        if (x >= 0 && x <= 25)
            cout << "[0,25]";
        else if (x > 25 && x <= 50)
            cout << "(25,50]";
        else if (x > 50 && x <= 75)
            cout << "(50,75]";
        else if (x > 75 && x <= 100)
            cout << "(75,100]";
    }

    return 0;
}
