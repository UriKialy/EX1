#include <stdio.h>
#include "NumClass.h"

int checkPalindrom(int n, int count);
int calcArmstrong(int n, int a, int len);
int power(int base,int expo);

int isPalindrom(int n)
{
    int ans = 0;
    int reversed = 0;
    int origin = n;
    int count = 0;
    if (n < 10)
    {
        ans = 1;
    }
    else
    {
        while (1)
        { // checking how many digits are a
            if (origin > 0)
            {
                origin / 10;
                count++;
            }
            else
            {
                break;
            }
        }
        origin = n;
        checkPalindrom(n, count - 1);
    }
    return ans;
}
int checkPalindrom(int n, int count)
{
    int i = 0;
    int lastdigit = n % 10;
    int firstdigit = n;
    int sent = 0;
    if (n < 10)
    {
        return 1;
    }
    for (i; i < count; i++)
    {
        firstdigit = firstdigit / 10;
    }
    if (firstdigit == lastdigit)
    {
        checkPalindrom(n, count - 2);
    }
    else
    {
        return 0;
    }
}

int isArmstrong(int a)
{
    int aNum = a;
    int count = 0;
    while (aNum > 0)
    { // checking how many digits are a
        aNum = aNum / 10;
        count++;
    }

    printf("number is %d \n", count);

    return calcArmstrong(a, a, count);
}

int power(int base,int expo){
    int i=1;
    int ans=base;
    for(i;i<expo;i++){
        ans=ans*base;
    }
    return ans;
}

int calcArmstrong(int n, int a, int len)
{
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