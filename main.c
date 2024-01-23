#include <stdio.h>
#include "NumClass.h"

int main()
{
    int first;
    int last;
    int a;
    int b;
    printf(" insert first number :  \n");
    scanf("%d", &first);
    printf(" insert second number :\n");
    scanf("%d", &last);
    printf("\n");
    printf("the prime numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {

        if (isPrime(a) == 1)
        {
            printf("%d ", a);
        }
    }
    printf("\n");
    printf("the armstrong numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {

        if (isArmstrong(a) == 1)
        {
            printf("%d ", a);
        }
    }
    printf("\n");
    printf("the strong numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {

        if (isStrong(a) == 1)
        {
            printf("%d ", a);
        }
    }
    printf("\n");
    printf("the Palindrom numbers are:");
    a = first, b = last;
    for (; a <= b; a++)
    {   

        if (isPalindrome(a) == 1)
        {
            printf("%d ", a);
        }
    }
    printf("\n");
    return 0;
}