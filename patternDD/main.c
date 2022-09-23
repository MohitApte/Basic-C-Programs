#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;
    int total_row=20;

    for(row=1;row<=total_row;row++){
        if(row<=total_row/2){

            for(col=1;col<=total_row/2;col++){
                if(col>=row){
                    printf("* ");

                }else{
                    printf("  ");

                }

            }


        }else{

            for(col=1;col<=total_row/2;col++){
                if(col>=((total_row) - row +1)){
                    printf("* ");

                }else{
                    printf("  ");

                }



            }



        }


        printf(" \n");

    }

    return 0;
}
