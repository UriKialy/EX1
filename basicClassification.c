#include <stdio.h>

// this func return 1 if n is prime and 0 else
int isPrime(int n)
{
    if (n < 0 || n == 0)
    {
        return 0;
    }
    int i = 2;
    if (n <= 2)
    {
        return 1; // base case
    }
    else
    {
        for (; i < n; i ++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

// this func return 1 if n is a strong number and 0 else
int isStrong(int n)
{ 
    if (n < 0 || n == 0)
    {
        return 0;
    }
    int num = 0;
    int copy = n;
    while (copy != 0)
    {
        num = num + factorial(copy % 10);
        copy = copy / 10;
    }
    if (num == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//this function calculates the factorial of n
int factorial(int n)
{
    if (n < 0)
    {
        return 0;
    }
    int i = 1;
    int copy=1;
    for (; i<n; i++)
    {
        copy=copy*(i+1);
    }
    return copy;
}