#include<stdio.h>

int main(){

    int array[10] = {1, 2, 3, 4, 5, 3, 7, 8, 7, 10};
    int maxNum = 10;

    int hashArray[11] = {0};


    for(int i=0;i<maxNum;i++){
        int a = array[i];
        if(hashArray[a] == 1){
            printf("Duplicate found!, %d\n",a);
        }else{
            hashArray[a]=1;
        }

    }


    return 0;
}
