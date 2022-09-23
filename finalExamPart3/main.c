#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int zoomIn=0;
    int condition[14];
    for(int row=1; row<=40;row++){
            char line[44] = {""};
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
            if(condition[0]){
                strcat(line,"|");

            }else if(condition[1]){
                strcat(line,":");
            }else if(condition[2]){
                strcat(line,"/");
            }else if(condition[3]){
                strcat(line,"\\");
            }else if(condition[4]){
                strcat(line,"_");
            }else if(condition[5]){
                strcat(line,"'");
            }else if(condition[6]){
                strcat(line,".");
            }else if(condition[7]){
                strcat(line,"=");
            }else if(condition[8]){
                strcat(line,"(");
            }else if(condition[9]){
                strcat(line,")");
            }else if(condition[10]){
                strcat(line,";");
            }else if(condition[11]){
                strcat(line,"[");
            }else if(condition[12]){
                strcat(line,"]");
            }else if(condition[13]){
                strcat(line,"o");
            }else if(row==17 && col==6){
                strcat(line,"12");
            }else if(row==20 && col==11){
                strcat(line,"3");
            }else if(row==23 && col==7){
                strcat(line,"6");
            }else if(row==20 && col==3){
                strcat(line,"9");
            }else{
                 if(!(row==17 && col==8)){
                strcat(line," ");
                 }

            }
            if(zoomIn){
                printf("  ");

            }

        }
        printf("%s",line);
        printf("\n");

        if(zoomIn){
            printf("\n");


        }
    }


    return 0;
}
