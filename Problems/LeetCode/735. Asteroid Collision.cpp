class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> s;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (asteroids[i] < 0)
            {
                while (!s.empty() && s.top() > 0 && s.top() < -1 * asteroids[i])
                {
                    s.pop();
                }
                if (s.empty() || s.top() < 0)
                {
                    s.push(asteroids[i]);
                }
                if (!s.empty() && s.top() == -1 * asteroids[i])
                {
                    s.pop();
                }
            }
            else
                s.push(asteroids[i]);
        }
        vector<int> res(s.size());
        int i = s.size() - 1;
        while (!s.empty())
        {
            res[i--] = s.top();
            s.pop();
        }
        return res;
    }
};