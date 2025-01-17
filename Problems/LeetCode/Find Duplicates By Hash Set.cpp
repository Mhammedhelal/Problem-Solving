/*
 * Template for using hash set to find duplicates.
 */
bool findDuplicates(vector<Type> &keys)
{
    // Replace Type with actual type of your key
    unordered_set<Type> hashset;
    for (Type key : keys)
    {
        if (hashset.count(key) > 0)
        {
            return true;
        }
        hashset.insert(key);
    }
    return false;
}