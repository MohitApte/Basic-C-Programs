#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    int total_row=18;


    for(row=1;row<=total_row;row++){

        for(col=1;col<=total_row;col++){
            if(col<=total_row/2){
                    if(row<=total_row/2){
                        if(col<=row){
                            printf("* ");

                        }else{
                            printf("  ");
                        }
                    }else {
                        if(col<=total_row-row+1){

                            printf("* ");
                        }else{

                            printf("  ");
                        }


                    }
            }
            if(col==total_row/2){
                printf("  ");

            }
            if(col>total_row/2){
                if(row<=total_row/2){
                    if(col>=total_row-row+1){

                        printf("* ");
                    }else{

                    printf("  ");
                    }


                }else{

                    if(col>=row){
                        printf("* ");

                    }else{

                        printf("  ");

                    }

                }

            }


        }

    printf("\n");



    }

    return 0;
}
