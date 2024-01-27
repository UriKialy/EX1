#include <stdio.h>
#include "NumClass.h"

//this function checks if the number is an armstrong number using loops
int isArmstrong(int a)
{
    if (a < 0)
    {
        return 0;
    }
    int i = 0;
    int j = a;
    int curr = 0;
    int aNum = a;
    int count = 0;
    while (aNum > 0)
    { // checking how many digits are a
        aNum = aNum / 10;
        count++;
    }
    int c = 0;
    for (; c < count; c++)
    { // raise the digits to the power of the number.size
        curr = j % 10;
        i = i + power(curr, count);
        j = j / 10;
    }
    if (i == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//this function checks if the number is a palindrom number using loops
int isPalindrome(int n)
{
    if (n< 0)
    {
        return 0;
    }
    int ans = 0;
    int reversed = 0;
    int origin = n;
    if (n< 10)
    {
        ans = 1;
    }
    else
    {
        while (origin > 0)
        {
            int digit = origin % 10;
            reversed = reversed * 10 + digit;
            origin = origin / 10;
        }
    }
    if (reversed == n)
    {
        ans = 1;
    }
    return ans;
}

//this function calculate the base power by expo
int power(int base, int expo)
{
    if (base < 0 || expo < 0)
    {
        return 0;
    }
    int i = 1;
    int ans = base;
    for (; i < expo; i++)
    {
        ans = ans * base;
    }
    return ans;
}