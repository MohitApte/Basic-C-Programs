#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char word[80];
    printf("Enter a sentence: ");
    gets(word);
    int ctrC = 0,ctrV = 0;
    char c;
    int i = 0;
    while(word[i] != '\0'){
        if(word[i]>=65 && word[i]<=90){
                word[i] = word[i] + 32;



        }else if(word[i]>=97 && word[i]<=122){

                word[i] = word[i] - 32;

        }
        i++;
    }

    printf("Case reversed string is %s\n",word);




    return 0;
}
