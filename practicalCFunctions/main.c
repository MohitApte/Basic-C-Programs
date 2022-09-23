#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int stack[10];
int top = -1;

void push(int m){
    top++;
    stack[top] = m;
}



int pop(){
    int j;
 if(top==-1) return top;
 j =stack[top];
 top--;
 return j;
}


void isPalindrome(int num){
    int remainder, exp, j;
    int temp = num;
    while(num>0){
        remainder = num%10;
        push(remainder);
        num = num/10;
    }
    exp = 0;
    while(top>=0){
        j = pop();
        num = num + j*pow(10,exp);
        exp++;
    }

    if(temp == num){
        printf("number is a palindrome");

    }else{
        printf("number is not a palindrome");


    }
}







int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    isPalindrome(num);
    return 0;
}
