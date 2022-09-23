#include <stdio.h>
#include <stdlib.h>

void printLetter(int* condition, char data[]){
    if(*condition){
        printf("%c",data);


    }


}


int main()
{
    int zoomIn=0;
    int condition[19];

    for(int row=1; row<=40;row++){
        for(int col=1; col<=14;col++){
            condition[0] = ((((row>=8 && row<=15)|| (row>=3 && row<=4)||(row==6)|| (row>=25 && row<=37))&&(col==4 || col==10)) || ((row>=19 && row<=21)&&(col==1 || col==2 ||col==12 || col==13))|| (row==4 &&(col==5 || col==7 || col==9)));
            condition[1] = (((row==6) ||(row>=8 && row<=15)||(row>=25 && row<=37))&&(col==5 || col==9));
            condition[2] = (((row==2 || row==3) && (col==5))|| ((col==2)&&(row==18))||(col==3 &&(row==17 || row==18))||(col==12 && row==22)||(col==11 &&(row==22 || row==23))|| (row==39 && col==9)|| (row==40 && col==8)|| (col==6 && row==21));
            condition[3] = (((row==2 || row==3) && (col==9))|| ((col==12)&&(row==18))||(col==11 &&(row==17 || row==18))||(col==2 && row==22)||(col==3 &&(row==22 || row==23))|| (row==39 && col==5)|| (row==40 && col==6)|| (col==6 && row==19));
            condition[4] = (((col>=6 && col<=8)&& (row==1 || row==2 || row==6 || row==15 || row==16 || row==24 ))|| ((col>=5 && col<=9) && (row==5 || row==7))|| ((row==4 || row==23) && (col==6 || col==8)));
            condition[5] = (((row==17||row==38)&&(col==5||col==9))|| (row==39 && (col==6 || col==8))|| (row==23 && (col==4 || col==10)));
            condition[6] = ((row==40 && col==7)|| (row==17 && (col==4 || col==10))|| (row==23 && (col==5 || col==9))|| (col == 7 && row==20));
            condition[7] = ((row==16||row==24)&&(col==5||col==9));
            condition[8] = (col==4 && (row==16 || row ==24));
            condition[9] = ((col==10 && (row==16 || row==24))|| (row==20 && col==14));
            condition[10] = (row== 38 &&(col==4 || col==10));
            condition[11] = (col==4 && (row==5 || row==7));
            condition[12] = (col==10 && (row==5 || row==7));
            condition[13] = (col==7 && (row>=34 && row<=37));
            condition[14] =(row==17 && col==6);
            condition[15] =(row==17 && col==7);
            condition[16] =(row==20 && col==11);
            condition[17] =(row==23 && col==7);
            condition[18] = (row==20 && col==3);
            printLetter(&condition[0],'|');
            printLetter(&condition[1],':');
            printLetter(&condition[2],'/');
            printLetter(&condition[3],'\\');
            printLetter(&condition[4],'_');
            printLetter(&condition[5],'\'');
            printLetter(&condition[6],'.');
            printLetter(&condition[7],'=');
            printLetter(&condition[8],'(');
            printLetter(&condition[9],')');
            printLetter(&condition[10],';');
            printLetter(&condition[11],'[');
            printLetter(&condition[12],']');
            printLetter(&condition[13],'o');
            printLetter(&condition[14],'1');
            printLetter(&condition[15],'2');
            printLetter(&condition[16],'3');
            printLetter(&condition[17],'6');
            printLetter(&condition[18],'9');


            if(!condition[0] && !condition[1] && !condition[2] && !condition[3] && !condition[4] && !condition[5] && !condition[6] && !condition[7] && !condition[8] && !condition[9] && !condition[10] &&!condition[11] &&!condition[12] &&!condition[13] && !(row==17 && col==6) && !(row==20 && col==11) && !(row==23 && col==7) && !(row==20 && col==3) && !(row==17 && col==6) ){
                 if(!(row==17 && col==8)){
                printf(" ");
                 }

            }
            if(zoomIn){
                printf("  ");

            }

        }

        printf("\n");

        if(zoomIn){
            printf("\n");


        }
    }


    return 0;
}
