#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[50][50];

    for(int row=0;row<50;row++){
        for(int col=0;col<50;col++){
            arr[row][col] = ' ';


        }

    }


    for(int i=0;i<24;i++){
        for(int j=0;j<5;j++){

             printPattern(arr,i,j);



        }
    }

    for(int row=0;row<50;row++){
        for(int col=0;col<50;col++){
            printf("%c ",arr[row][col]);


        }
        printf("\n");

    }




    return 0;
}

printPattern(char arr[50][50],int i, int j){
            arr[3*j][2*i +1] = 'X';
            arr[3*j +1][2*i] = '/';
            arr[3*j +1][2*i +1] = '\\';
            arr[3*j +2][2*i] = '\\';
            arr[3*j +2][2*i +1]  = '/';





}
