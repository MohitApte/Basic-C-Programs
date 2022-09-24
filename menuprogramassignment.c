#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("THIS IS A CALCULATOR\n");
    int num1;
    int num2;
    char operation;
    printf("Enter number 1:\n");
    scanf("%d",&num1);
    printf("Enter number 2:\n");
    scanf("%d",&num2);

    printf("Choose Which Operation You Want To Perform\n Addition:a Subtraction:s Multiplication:m Division:d\n");
    scanf(" %c",&operation);
    switch(operation){
        case 'a':
            printf("Addition is %d",num1+num2);
            break;
        case 's':
            printf("Subtraction is %d",num1-num2);
            break;
        case 'm':
            printf("Multiplication is %d",num1*num2);
            break;
        case 'd':
            printf("Division is %d",num1/num2);
            break;
        default:
            printf("Incorrect letter chosen");
    }

    return 0;
}
