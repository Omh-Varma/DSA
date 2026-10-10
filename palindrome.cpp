class Solution
{
public:
    bool isPalindrome(int x)
    {
        long reversedNum = 0;
        int n = x;
        int temp = x;
        while (temp > 0)
        {
            int digit = temp % 10;
            reversedNum = reversedNum * 10 + digit;
            temp = temp / 10;
        }
        return (reversedNum == n);
    }
};