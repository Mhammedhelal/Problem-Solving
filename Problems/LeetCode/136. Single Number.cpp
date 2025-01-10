class Solution
{
public:
    struct pair
    {
        int pos, neg;
        pair() : pos(0), neg(0) {}
    };
    int singleNumber(vector<int> &nums)
    {
        pair found[30001] = {};

        for (int i : nums)
        {
            if (i >= 0)
                found[i].pos++;
            else
                found[-1 * i].neg++;
        }

        for (int i : nums)
        {
            if (i >= 0)
            {
                if (found[i].pos == 1)
                    return i;
            }
            else
            {
                if (found[-1 * i].neg == 1)
                    return i;
            }
        }
        return 0;
    }
};