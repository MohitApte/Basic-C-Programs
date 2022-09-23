#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, total_row =5;

    for(row=0;row<=total_row;row++){
        for(col=row;col>=0;col--){
            printf("%d ",col);



        }
        printf("\n");
    }

    return 0;
}
