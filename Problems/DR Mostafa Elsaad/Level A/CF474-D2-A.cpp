// https://codeforces.com/contest/474/submission/281066612
#include <bits/stdc++.h>
using namespace std;

int found(string s, char c)
{
    int size = s.size();
    for (int i = 0; i < size; i++)
        if (s[i] == c)
            return i;

    return -1;
}
int main()
{
    char c;
    string s;
    cin >> c >> s;
    string seq1 = "qwertyuiop";
    string seq2 = "asdfghjkl;";
    string seq3 = "zxcvbnm,./";
    int shift = (c == 'R') ? -1 : 1;

    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (found(seq1, s[i]) > -1)
            cout << seq1[found(seq1, s[i]) + shift];
        else if (found(seq2, s[i]) > -1)
            cout << seq2[found(seq2, s[i]) + shift];
        else if (found(seq3, s[i]) > -1)
            cout << seq3[found(seq3, s[i]) + shift];
    }

    return 0;
}
