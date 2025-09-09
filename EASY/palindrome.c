#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long inverted = 0;
    int temp = x;
    while(x > 0)
    {
        inverted = inverted * 10 + x % 10;
        x /= 10;
    }
    return temp == inverted;
}