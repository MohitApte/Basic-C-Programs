#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target){
    for(int i=0; i<=numsSize;i++){
        for(int j=0;j<=numsSize;j++){

            if(nums[i]+nums[j]==target){

            printf("[%d,%d]",i,j);
            }


        }

    }
    return 0;
}


int main()
{
    int nums[] = {2,7,11,15};
    int target = 9;
    twoSum(nums, 4 ,target);

    return 0;
}
