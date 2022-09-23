#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;
    int total_row=20;

    for(row=1;row<=total_row;row++){

        for(col=1;col<=total_row;col++){
            if(row<=total_row/2){

                if(col<=total_row/2){
                    if(col>=total_row/2 - row +1){
                        printf("* ");

                    }else{
                        printf("  ");
                    }




                }



            }else{

            if(col>=total_row/2){

                if(col<=1.5*(total_row)-row){
                    printf("* ");

                }


            }else{

                printf("  ");

            }





            }
        }

        printf(" \n");

    }

    return 0;
}
