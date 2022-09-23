#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;
    int condition;
    int total_row = 5;
    for(row=1;row<=total_row;row++){
        for(col=1;col<=2*total_row-1;col++){
                if(total_row %2 ==0){
                    condition = ((row+col == total_row+1)||(col-row==total_row -1)|| ((row==(total_row)/2 + 1 )&&(col>=total_row/2 && col<=3*(total_row)/2 )));


                }else{
                    condition = ((row+col == total_row+1)||(col-row==total_row -1)|| ((row==(total_row)/2 + 1 )&&(col>total_row/2 && col<=3*(total_row)/2 )));

                }
                if(condition){
                    printf("* ");

                }else{
                    printf("  ");

                }

        }
        printf("\n");
    }

    return 0;
}
