class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> products;
        int zero = 0, product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zero++;
            else
                product *= nums[i];
        }
        if (zero > 1)
        {
            for (int i = 0; i < nums.size(); i++)
                products.push_back(0);
        }
        else if (zero == 1)
        {
            for (int i = 0; i < nums.size(); i++)
                if (nums[i] == 0)
                    products.push_back(product);
                else
                    products.push_back(0);
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
                products.push_back(product / nums[i]);
        }

        return products;
    }
};