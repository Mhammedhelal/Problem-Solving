class Solution
{
public:
    int intparse(string s)
    {
        int n = 0;
        int bit = 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            n += bit * (int)(s[i] - 48);
            bit *= 10;
        }
        return n;
    }

    string decodeString(string s)
    {
        int size = s.size();
        string res = "";
        string temp = "";
        string num = "";
        int n;
        stack<char> stack;
        for (int i = 0; i < size; i++)
        {
            if (!(s[i] >= '0' && s[i] <= '9'))
            {
                res += s[i];
            }
            else
            {
                while (s[i] != '[')
                {
                    num += s[i++];
                }
                stack.push(s[i++]);
                while (!stack.empty())
                {
                    if (s[i] == '[')
                        stack.push(s[i]);
                    else if (s[i] == ']' && stack.size() > 1)
                        stack.pop();
                    else if (s[i] == ']' && stack.size() == 1)
                    {
                        stack.pop();
                        break;
                    }
                    temp += s[i++];
                }
                n = intparse(num);
                while (n--)
                {
                    res += decodeString(temp);
                }
                num = "";
                temp = "";
            }
        }
        return res;
    }
};