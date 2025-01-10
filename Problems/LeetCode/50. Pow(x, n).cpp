class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1.0;
        if (n < 0)
        {
            if (n == INT_MIN)
            {
                n += 1;
                x = 1 / x;
                return x * myPow(x, -n);
            }
            return myPow(1 / x, -n);
        }
        double half = myPow(x, n / 2);
        return (n % 2 == 0) ? half * half : half * half * x;
    }
};