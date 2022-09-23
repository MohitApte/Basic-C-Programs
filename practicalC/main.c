#include <stdio.h>
#include <stdlib.h>






int main()
{
    int length_1,length_2;
    printf("Enter the length of the first sorted array:\n");
    scanf("%d",&length_1);
    printf("Enter the length of the second sorted array:\n");
    scanf("%d",&length_2);

    int array1[length_1];
    int array2[length_2];
    int arrayCombined[100];

    printf("Enter the elements of the first array in order:\n");
    for(int i=0;i<length_1;i++){
        scanf("%d",&array1[i]);

    }
    printf("Enter the elements of the second array in order:\n");
    for(int i=0;i<length_2;i++){
        scanf("%d",&array2[i]);

    }
    int count =0;
    int i=0,j=0;
    while(i<length_1 && j<length_2){
            if(array1[i]< array2[j]){
                arrayCombined[count] = array1[i];
                count++;
                i++;

            }else{

            if(array1[i]> array2[j]){

                arrayCombined[count] = array2[j];
                count++;
                j++;

            }else{
                arrayCombined[count] = array1[i];
                count++;
                i++;
                arrayCombined[count] = array2[j];
                count++;
                j++;



            }




            }

    }

     while(i<length_1){
          arrayCombined[count] = array1[i];
                count++;
                i++;


        }

    while(j<length_2){
        arrayCombined[count] = array2[j];
                count++;
                j++;



    }



    printf("array combined is:\n");
    for(int i=0;i<count;i++){
        printf("%d ",arrayCombined[i]);

    }



    return 0;
}
