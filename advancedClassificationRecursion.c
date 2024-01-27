#include <stdio.h>
#include "NumClass.h"

int reverseNum(int, int);
int calcArmstrong(int, int, int);

//this function checks if the number is a palindrom recursivly
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

//this function returns if a number if the number is a armstrong number recursivly
int isArmstrong(int a)
{
    if (a < 0)
    {
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


//this function reverses the number given to her
int reverseNum(int n, int copy)
{
    if (n == 0)
    {
        return copy;
    }
    copy = (copy * 10) + (n % 10);
    return reverseNum(n / 10, copy);
}

//this function calculates if a number if the number is a armstrong number recursivly
int calcArmstrong(int n, int a, int len)
{
    if (n < 0)
    {
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