class Solution
{
public:
    int maximum(vector<int> &candies)
    {
        int max = candies[0];
        for (int i = 1; i < candies.size(); i++)
            if (candies[i] > max)
                max = candies[i];

        return max;
    }
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result(candies.size());
        int max = maximum(candies);
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max)
                result[i] = true;
            else
                result[i] = false;
        }

        return result;
    }
};