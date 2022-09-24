#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {0,1,0,10,9,7,0,1,0};

    int length = sizeof(array)/sizeof(array[0]);

    int startIndex = 0;
    int endIndex = length -1;

    while(startIndex != endIndex){
        if(array[startIndex]==0){
            int temp = array[startIndex];
            array[startIndex] = array[endIndex];
            array[endIndex] = temp;

        }else{
            startIndex++;
        }
        if(array[endIndex]==0){
            endIndex--;
        }

    }
    for(int i=0; i<length;i++){
        printf("%d\t",array[i]);

    }


    return 0;
}
