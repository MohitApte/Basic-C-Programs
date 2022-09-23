#include <stdio.h>
#include <stdlib.h>
#define max 10
int main()
{

    int vertices;
    int matrix[max][max];
    int v1;
    int v2;
    printf("Enter the number of vertices: ");
    scanf("%d",&vertices);
    printf("We assume that the vertices are: ");
    for(int i=1;i<=vertices;i++){
        printf("%d ",i);
    }
    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){

            matrix[i][j]= 0;

        }

    }
    printf("Enter the number between which there is a edge.\n Like for example 1 4 will mean there is an edge between 1 and 4.\n Enter 0 0 after you are complete:\n");
    for(int i=1; i<=vertices*(vertices -1); i++){
        printf("Enter vertex 1: ");
        scanf("%d",&v1);
        printf("Enter vertex 2: ");
        scanf("%d",&v2);
        if(v1==0 && v2==0){
            break;
        }
        matrix[v1][v2] =1;
        matrix[v2][v1] =1;
    }
    printf("The adjacency matrix for the graph is:\n");
    for(int i=1;i<=vertices;i++){
        printf("\t%d", i);
    }
    printf("\n-----------------------------------------------------------\n");
    for(int i=1;i<=vertices;i++){
        printf("%d |\t", i);
        for(int j=1;j<=vertices;j++){
            printf("%d\t",matrix[i][j]);

        }
        printf("\n");

    }

    return 0;
}
