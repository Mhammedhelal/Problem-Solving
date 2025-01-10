#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    char max1, max2, max3, min1, min2, min3;

    if (s1[1] == '>')
    {
        max1 = s1[0];
        min1 = s1[2];
    }
    else
    {
        max1 = s1[2];
        min1 = s1[0];
    }

    if (s2[1] == '>')
    {
        max2 = s2[0];
        min2 = s2[2];
    }
    else
    {
        max2 = s2[2];
        min2 = s2[0];
    }

    if (s3[1] == '>')
    {
        max3 = s3[0];
        min3 = s3[2];
    }
    else
    {
        max3 = s3[2];
        min3 = s3[0];
    }

    if (max1 == max2)
        cout << min3 << max3 << max1;
    else if (min1 == min2)
        cout << min1 << min3 << max3;

    else if (max1 == min2)
    {
        if (max2 == max3)
            cout << min3 << max1 << max3;
        else
            cout << "Impossible";
    }
    else if (min1 == max2)
    {
        if (min2 == min3)
            cout << min3 << min1 << max3;
        else
            cout << "Impossible";
    }

    return 0;
}