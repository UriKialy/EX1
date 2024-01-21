#include <stdio.h>

int isPrime(int n) // this func return 1 if n is prime and 0 else
{
    int i = 2;
    if (n <= 2)
    {
        return 1; // base case
    }
    else
    {  
            for (i; i < sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    return 0;
                }
            }
            return 1;
    }
}
    int factorial(int n){
        int i=n;
        for(i;i>0;i--){
            n=n*(n-1);
            n=n-1;
        }
        return n;
    }

int isStrong(int n){  // this func return 1 if n is a strong number and 0 else
    int num=0;
    int copy=n;
    while(n!=0){
        num=num+ factorial(n %10);
        copy=copy/10;   
    }
    if(num ==n){
        return 1;
    }
    else{
        return 0;
    }
}    