#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, c=0;
    scanf("%d", &n);
    for(int j=2; j*j <= n; j++) {   // here

            int c=0;
            while( n%j==0 ) {
                c++;
                n /= j;
            }
            if(c!=0){
                printf(" %d  %d \n", j, c);
            }
    }
    if(n>1) {                       // and here
        printf(" %d  %d \n", n, 1);
    }
    return 0;
}
