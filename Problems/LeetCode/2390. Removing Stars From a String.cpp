#include <stack>
class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*')
                s1.push(s[i]);
            else if (s[i] == '*' && !s1.empty())
                s1.pop();
        }
        s = "";
        while (!s1.empty())
        {
            s.push_back(s1.top());
            s1.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};