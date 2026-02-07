class Solution
{
public:
    int climbStairs(int n)
    {
        // base cases
        if (n <= 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        // for n > 2, use dynamic programming
        else
        {
            // to climb n stairs, either climb n-1 stairs + 1, or n-2 stairs + 2
            int first = 1, second = 2, current = 0;
            // iterate from 3 to n, calculating the number of ways to climb i stairs
            for (int i = 3; i <= n; ++i)
            {
                // to climb i then i-1 + i-2
                current = first + second;
                first = second;
                second = current;
            }
            // return the total number of ways to climb n stairs
            return current;
        }
    }
};