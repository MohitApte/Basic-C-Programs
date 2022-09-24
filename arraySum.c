#include<stdio.h>

int main(){
    int noOfSums;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    int length = sizeof(array)/sizeof(array[0]);

    int cummilativeSumOfArray[10];

    int sum = 0;

    for(int i=0;i<length;i++){
        sum+= array[i];
        cummilativeSumOfArray[i] = sum;
    }
    printf("Enter how many times you wish to calculate the sum: ");
    scanf("%d",&noOfSums);
    while(noOfSums--){
        int a;
        int b;
        printf("Enter the value of the element index in num num format: ");
        scanf("%d %d",&a,&b);
        if(a>1){
            printf("The sum is: %d\n",cummilativeSumOfArray[b-1] - cummilativeSumOfArray[a-1]);
        }else{
            printf("The sum is: %d\n",cummilativeSumOfArray[b-1] - 0);
        }
    }
    return 0;
}
