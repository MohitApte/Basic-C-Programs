#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;
    int total_row=5;
    int num;
    for(row=1;row<=total_row;row++){
            num = 2* row - 1;
        for(col=1;col<=2*total_row-1;col++){

            if(col<=total_row+row-1 && col>=total_row-row+1){
                if(col<total_row){
                    printf("%d ",num);
                    num--;

                }else{
                    printf("%d ",num);
                    num++;
                }

            }








        }



        printf("\n");
    }

    return 0;
}
