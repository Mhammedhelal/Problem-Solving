class Solution
{
public:
    int hash[46];
    Solution()
    {
        fill(begin(hash), end(hash), -1);
    }
    int climbStairs(int n)
    {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        if (hash[n] != -1)
            return hash[n];
        hash[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return hash[n];
    }
};