#include <stdio.h>
#include <stdlib.h>
int total_row = 9;

int main()
{

    char row[total_row];
    char *pattern;
    int indexOne = total_row/2 +1;
    int indexTwo = total_row/2 -1;
    for(int i=0;i<total_row;i++){
        row[i] = ' ';
    }
    for(int i=0;i<total_row;i++){

        if(i<=total_row/2){
            indexOne--;
            indexTwo++;
            row[indexOne] = '*';
            row[indexTwo] = '*';


        }else{
            row[indexOne] = ' ';
            row[indexTwo] = ' ';
            indexOne++;
            indexTwo--;
        }
        printRow(row);
    }
    return 0;
}
void printRow(char row[total_row]){

    for(int i=0;i<total_row;i++){
        printf("%c ",row[i]);
    }
    printf("\n");

}
