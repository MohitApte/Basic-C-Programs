#include <stdio.h>

int main(void) {
	// your code goes here
    int T = 0;
    scanf("%d",&T);

     int N = 0;
    int ansAnd = 0;
    int ansOr = 0;
    for(int i=0;i<T;i++){
       N =0;
        scanf("%d",&N);

       int arrayA[N];
       int arrayOr[N];
        for(int j=0;j<N;j++){
            scanf("%d",&arrayA[j]);
        }
        ansAnd = 0;
        ansOr = 0;
        for(int k=N-1;k>=0;k--){
            ansOr = ansOr|arrayA[k];
            arrayOr[k] = ansOr;
        }
        for(int l = 0;l<N-1;l++){
            ansAnd = arrayA[l] & arrayOr[l+1];
        }

        printf("%d\n",ansAnd);


    }

	return 0;
}
