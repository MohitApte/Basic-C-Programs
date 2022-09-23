#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[44] = "";
    int total_row = 5;
    int MAX_COLUMNS = 2*total_row-1;
    int midIndex = total_row-1;
    int count = 0;

    for(int col=0;col<MAX_COLUMNS;col++){
        string[col] = ' ';

    }

    for(int row=1;row<=MAX_COLUMNS;row++){

        if(row==1){
                string[midIndex] = '*';

        }else if(row<=total_row){
                count = count+1;
                string[midIndex-count] = '*';
                string[midIndex+count] = '*';


        }else{

                string[midIndex-count] = ' ';
                string[midIndex+count] = ' ';
                count = count-1;

        }
        printf("%s\n",string);

    }


    return 0;
}
