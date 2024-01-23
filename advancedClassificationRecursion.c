#include <stdio.h>
#include "NumClass.h"

int reverseNum(int, int);
int calcArmstrong(int, int, int);

int isPalindrome(int n)
{
    int number = reverseNum(n, 0);

    if (number == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int reverseNum(int n, int copy)
{
    if (n == 0)
    {
        return copy;
    }
    copy = (copy * 10) + (n % 10);
    return reverseNum(n / 10, copy);
}
int isArmstrong(int a)
{
    if (a < 0)
    {
        printf("negative number, error");
        return 0;
    }
    int aNum = a;
    int count = 0;
    while (aNum > 0)
    { // checking how many digits are a
        aNum = aNum / 10;
        count++;
    }
    return calcArmstrong(a, a, count);
}

int power(int base, int expo)
{
    if (base < 0 || expo < 0)
    {
        printf("negative number, error");
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

int calcArmstrong(int n, int a, int len)
{
    if (n < 0)
    {
        printf("negative number, error");
        return 0;
    }
    int num = n;
    int dev = a;
    int ans = 0;
    if (n == 0)
    {
        if (a == 0)
        {
            ans = 1;
        }
        else
        {
            ans = 0;
        }
        return ans;
    }
    dev -= power(num % 10, len);
    num /= 10;
    return calcArmstrong(num, dev, len);
}