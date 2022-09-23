#include <stdio.h>
#include <stdlib.h>
int total_row = 23;
void clearPattern(char pattern[total_row][42*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<42*total_row/23;j++){
            pattern[i][j] = ' ';
        }
    }
}
void printPattern(char pattern[total_row][42*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<42*total_row/23;j++){
            printf("%c",pattern[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    char pattern[total_row][42*total_row/23];
    clearPattern(pattern);
    pattern1(pattern);
   // pattern2(pattern);
  //  pattern3(pattern);
    printPattern(pattern);

    return 0;
}

struct diamondOne{

    int middleLineIndex1Pattern;
    int middleLineIndex2Pattern;
    int patternIndex1;
    int patternIndex2;
    int patternIndex3;
    int patternIndex4;
    int row1;
    int row2;
    int row3;
    int row4;
    int middleRow;
};






void diamond1(char pattern[total_row][42*total_row/23],struct diamondOne newDiamond){


    for(int i=0;i<total_row;i++){
        while(newDiamond.middleLineIndex1Pattern!=newDiamond.middleLineIndex2Pattern && i==newDiamond.middleRow){
                        pattern[i][newDiamond.middleLineIndex1Pattern] = '_';
                        newDiamond.middleLineIndex1Pattern++;
            }



            if(i>=newDiamond.row1 && i<=newDiamond.row2){
                pattern[i][newDiamond.patternIndex1] = '/';
                pattern[i][newDiamond.patternIndex2] = '\\';
                newDiamond.patternIndex1--;
                newDiamond.patternIndex2++;
            }
            if(i>=newDiamond.row3 && i<=newDiamond.row4 && newDiamond.patternIndex3!=newDiamond.patternIndex4){
                pattern[i][newDiamond.patternIndex3] = '\\';
                pattern[i][newDiamond.patternIndex4] = '/';
                newDiamond.patternIndex3++;
                newDiamond.patternIndex4--;
            }


    }
}


void pattern1(char pattern[total_row][42*total_row/23]){

    struct diamondOne Pattern1;
     Pattern1.middleLineIndex1Pattern=7*total_row/23;
     Pattern1.middleLineIndex2Pattern=14*total_row/23;
    /*
    int middleLineIndex1Pattern2=2*total_row/23;
    int middleLineIndex2Pattern2=9*total_row/23;

    int middleLineIndex1Pattern3=12*total_row/23;
    int middleLineIndex2Pattern3=19*total_row/23;

    int middleLineIndex1Pattern4=7*total_row/23;
    int middleLineIndex2Pattern4=14*total_row/23;
 */
     Pattern1.patternIndex1 = 10*total_row/23 ;
     Pattern1.patternIndex2 = 11*total_row/23;
     Pattern1.patternIndex3 = 7*total_row/23;
     Pattern1.patternIndex4 = 14*total_row/23;

     Pattern1.row1 =3*total_row/23 ;
     Pattern1.row2 =6*total_row/23 ;
     Pattern1.row3 =7*total_row/23 ;
     Pattern1.row4 =10*total_row/23 ;
     Pattern1.middleRow = 6*total_row/23;
/*
    int pattern2Index1 = 5*total_row/23;
    int pattern2Index2 = 6*total_row/23;
    int pattern2Index3 = 2*total_row/23;
    int pattern2Index4 = 9*total_row/23;

    int pattern3Index1 = 15*total_row/23;
    int pattern3Index2 = 16*total_row/23;
    int pattern3Index3 = 12*total_row/23;
    int pattern3Index4 = 19*total_row/23;

    int pattern4Index1 = 10*total_row/23;
    int pattern4Index2 = 11*total_row/23;
    int pattern4Index3 = 7*total_row/23;
    int pattern4Index4 = 14*total_row/23;
*/
    int patternOuterIndex1 = 10*total_row/23;
    int patternOuterIndex2 = 11*total_row/23;
    int patternOuterIndex3 = 0*total_row/23;
    int patternOuterIndex4 = 21*total_row/23;

    diamond1(pattern,Pattern1);
 //   diamond1(pattern,middleLineIndex1Pattern2,middleLineIndex2Pattern2,pattern2Index1,pattern2Index2,pattern2Index3,pattern2Index4,8*total_row/23,11*total_row/23,12*total_row/23,15*total_row/23,11*total_row/23);
  //  diamond1(pattern,middleLineIndex1Pattern3,middleLineIndex2Pattern3,pattern3Index1,pattern3Index2,pattern3Index3,pattern3Index4,8*total_row/23,11*total_row/23,12*total_row/23,15*total_row/23,11*total_row/23);
  //  diamond1(pattern,middleLineIndex1Pattern4,middleLineIndex2Pattern4,pattern4Index1,pattern4Index2,pattern4Index3,pattern4Index4,13*total_row/23,16*total_row/23,17*total_row/23,20*total_row/23,16*total_row/23);

    for(int i=0;i<total_row;i++){
            if(i>=1*total_row/23 && i<=11*total_row/23){
                pattern[i][patternOuterIndex1] = '/';
                pattern[i][patternOuterIndex2] = '\\';
                patternOuterIndex1--;
                patternOuterIndex2++;

            }
            if(i>=12*total_row/23 && i<=22*total_row/23 && patternOuterIndex3!=patternOuterIndex4 ){
                pattern[i][patternOuterIndex3] = '\\';
                pattern[i][patternOuterIndex4] = '/';
                patternOuterIndex3++;
                patternOuterIndex4--;

            }

    }

}

