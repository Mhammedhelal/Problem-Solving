class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;
        bool condition;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (i == 0 && i == flowerbed.size() - 1)
                condition = flowerbed[i] == 0;
            else if (i == 0)
                condition = flowerbed[i] == 0 && flowerbed[i + 1] == 0;
            else if (i == flowerbed.size() - 1)
                condition = flowerbed[i] == 0 && flowerbed[i - 1] == 0;
            else
                condition = flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0;
            if (condition)
            {
                count++;
                flowerbed[i] = 1;
            }
            if (count >= n)
                return true;
        }

        return count == n;
    }
};