class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, unordered_map<int, bool>> found;

        for (int i : nums1)
            found[i][1] = true;

        for (int i : nums2)
            found[i][2] = true;

        vector<int> result;
        for (int i = 0; i < found.size(); i++)
        {
            if (found[i][1] == true && found[i][2] == true)
                result.push_back(i);
        }

        return result;
    }
};