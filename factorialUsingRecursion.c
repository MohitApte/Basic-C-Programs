#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int fact =1;
    fact = factorial(num, fact);
    printf("%d",fact);
    return 0;
}

int factorial(int num, int fact){

    if(num == 1){

       return  fact;
    }else{

        fact = num * factorial(num -1,fact);

    }

}
