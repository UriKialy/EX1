#include <stdio.h>
#include "NumClass.h"

int power(int base,int expo){
    int i=1;
    int ans=base;
    for(i;i<expo;i++){
        ans=ans*base;
    }
    return ans;
}

int isArmstrong(int a)
{
    int i = 0;
    int j = a;
    int curr = 0;
    int aNum = a;
    int count = 0;
    while (aNum>0)
    { // checking how many digits are a
          aNum=aNum/10;
            count++;
        }
    int c = 0;
    for (c; c < count; c++)
    { // raise the digits to the power of the number.size
        curr = j % 10;
        i = i + power(curr, count);
        j=j/10;
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

int isPalindrom(int a)
{
    int ans = 0;
    int reversed = 0 ;
    int origin = a;
    if (a < 10)
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
    if (reversed == a)
    {
        ans = 1;
    }
    return ans;
}