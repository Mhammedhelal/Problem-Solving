class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s)
    {
        int lastVowel;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isVowel(s[i]))
            {
                lastVowel = i;
                break;
            }
        }
        int i = 0, j = lastVowel;
        while (i < j)
        {
            if (isVowel(s[i]) && isVowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (isVowel(s[i]))
                j--;
            else if (isVowel(s[j]))
                i++;
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};