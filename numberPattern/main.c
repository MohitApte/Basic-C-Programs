#include <stdio.h>
#include <stdlib.h>

int main()
{

    int totalRows = 9;
    int unicode_A = 65;
    int unicode_a = 97;
    int unicode_1 = 49;


    printPattern(totalRows,unicode_A);
    printf("\n");
    printPattern(totalRows,unicode_a);
    printf("\n");
    printPattern(totalRows,unicode_1);



    return 0;
}

void printPattern(int totalRows, int unicode){

    int row;
    int col;
    int total_row=totalRows/2 + 1;
    int lw_lt_num, lw_lt_spaces, up_lt_spaces;
    int numSet1;
    int numSet2 = 0;



    for(row=0;row<total_row-1;row++){
        for(col=1;col<=2*total_row-1;col++){

            if(row==0){
                lw_lt_num = total_row - 1;
                lw_lt_spaces = 0;
                up_lt_spaces = -1;

            }else{
                lw_lt_num = total_row - row;
                lw_lt_spaces = total_row - row +1;
                up_lt_spaces = total_row + row -1;


            }
            if(col<=lw_lt_num){
                numSet1 = col + (unicode - 1);
                printf("%c ",numSet1);
                if(col==lw_lt_num){
                    numSet2 = numSet1;

                }

            }else if(col>=lw_lt_spaces && col<=up_lt_spaces){
                printf("  ");

            }else{
                if(row==0 && col==total_row){
                    numSet2 = total_row + (unicode-1);

                }
                printf("%c ",numSet2);
                numSet2 = numSet2 - 1;

            }






        }
        if(row != total_row-2){
        printf("\n");
        }

    }

    for(row=total_row;row>=0;row--){
        for(col=1;col<=2*total_row-1;col++){

            if(row==0){
                lw_lt_num = total_row - 1;
                lw_lt_spaces = 0;
                up_lt_spaces = -1;

            }else{
                lw_lt_num = total_row - row;
                lw_lt_spaces = total_row - row +1;
                up_lt_spaces = total_row + row -1;


            }
            if(col<=lw_lt_num){
                numSet1 = col + (unicode - 1);
                printf("%c ",numSet1);
                if(col==lw_lt_num){
                    numSet2 = numSet1;

                }

            }else if(col>=lw_lt_spaces && col<=up_lt_spaces){
                printf("  ");

            }else{
                if(row==0 && col==total_row){
                    numSet2 = total_row + (unicode-1);

                }
                printf("%c ",numSet2);
                numSet2 = numSet2 - 1;

            }






        }
        printf("\n");

    }






    }











