#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;
    int choose = 0;
    int condition;
    int total_row=12;
    int total_col=23;

    switch(choose){
    case 0:


        break;
    //case 1:

    //case 2:

    default:
        printf("Wrong number");
        break;

    }
    condition = ((row+col==12 && (row<=4 || row>=8))) ;

    for(row=1;row<=total_row;row++){
        for(col=1;col<=total_col;col++){
            if(condition == 1){

                printf("0 ");
            }else{
                printf("  ");

            }


        }
        printf("\n");

    }





    return 0;
}
