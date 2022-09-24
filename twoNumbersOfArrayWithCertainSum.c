#include<stdio.h>

int main(){

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxNum = 10;

    int hashArray[11] = {0};

    int requiredSum = 7;

    for(int i=0;i<maxNum;i++){
        int a = requiredSum - array[i];
        if(hashArray[a] == 1){
            printf("Match Found! %d, %d\n",array[i],a);
        }else{

            hashArray[array[i]] = 1;
        }

    }


    return 0;
}
