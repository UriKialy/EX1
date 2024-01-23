#include <stdio.h>
#include "NumClass.h"

int main()
{
    int first;
    int last;
    int a;
    int b;
    scanf("%d", &first);
    scanf("%d", &last);
    printf("\n");
    printf("The Armstrong numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {
        if (isArmstrong(a) == 1)
        {
            printf(" %d", a);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    a = first, b = last;
    for (; a <= b; a++)
    {
        if (isPalindrome(a) == 1)
        {
            printf(" %d", a);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {
        if (isPrime(a) == 1)
        {
            printf(" %d", a);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {
        if (isStrong(a) == 1)
        {
            printf(" %d", a);
        }
    }
    printf("\n");
    return 0;
}