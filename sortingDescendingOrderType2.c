#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1,6,2,3,0,77,21,34,54,67};

    int length = sizeof(array)/sizeof(array[0]);

    int index1;
    int index2;

    for(index1=0;index1<=length-2;index1++){
        for(index2= index1+1;index2<=length-1;index2++){
            if(array[index1]<array[index2]){
                int temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;

            }

        }

    }

    for(int i=0; i<length;i++){
        printf("%d\t",array[i]);

    }


    return 0;
}
