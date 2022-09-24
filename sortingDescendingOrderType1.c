#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1,6,2,3,0,77,21,34,54,67};

    int length = sizeof(array)/sizeof(array[0]);

    int startIndex;
    int endIndex = length -1;

    for(startIndex=0;startIndex<=length-1;startIndex++){
        endIndex = length-1;
        while(startIndex!=endIndex){
            if(array[startIndex]<array[endIndex]){
                int temp = array[startIndex];
                array[startIndex] = array[endIndex];
                array[endIndex] = temp;
            }
            endIndex--;

        }

    }

    for(int i=0; i<length;i++){
        printf("%d\t",array[i]);

    }


    return 0;
}
