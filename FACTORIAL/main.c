#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int fact =1;
    for(int i=num;i>1;i--){
        fact = fact * i;

    }
    printf("%d",fact);
    return 0;
}


