class Solution
{
public:
    int hash[31];
    Solution()
    {
        fill(begin(hash), end(hash), -1);
    }
    int fib(int n)
    {
        if (hash[n] != -1)
            return hash[n];

        int result;
        if (n < 2)
            result = n;
        else
            result = fib(n - 1) + fib(n - 2);

        hash[n] = result;
        return result;
    }
};