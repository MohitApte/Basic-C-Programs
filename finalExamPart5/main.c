#include <stdio.h>
#include <stdlib.h>

void printLetter(int condition, char data[]){
    if(condition){
        printf("%c",data);


    }


}
struct node{

    int data;
    struct node* next;

};
struct node* nodeNew(int data){

    struct node * newNode = NULL;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;
    return newNode;

};
void printList(struct node* head){
    struct node* current;
    for(current = head;current!=NULL;){
        printf("%d-->",current->data);
        current = current->next;

    }
    printf("NULL");
}
struct node * lastNode(struct node *head){
    struct node* last = NULL;

    for(last=head;last!=NULL && last->next != NULL;){
        last = last->next;

    }
    return last;

};


struct node* buildLinkedList(struct node* head, int totalNodes) {

        struct node *last = NULL;
        last = lastNode(head);
        for( int count = 1; count <= totalNodes; count++){
            struct node * newNode = NULL;
            int data=0;
            newNode = nodeNew(data);
            if( head == NULL){
            head = newNode;
            last = newNode;

            }else{

                if(last != NULL){
                    last->next = newNode;
                    last = last->next;
                }

            }

        }
        return head;

    }

struct node* findNode(struct node* head, int number){
    struct node* current = NULL;
    int count = 1;
    for(current=head; current!=NULL;current = current->next){
        if(count == number){
            break;

        }
        count++;
    }
    return current;
};





int main()
{
    int zoomIn=0;
    struct node* head = NULL;
    head = buildLinkedList(head,19);




    for(int row=1; row<=40;row++){
        for(int col=1; col<=14;col++){




            findNode(head,1)->data = ((((row>=8 && row<=15)|| (row>=3 && row<=4)||(row==6)|| (row>=25 && row<=37))&&(col==4 || col==10)) || ((row>=19 && row<=21)&&(col==1 || col==2 ||col==12 || col==13))|| (row==4 &&(col==5 || col==7 || col==9)));

           findNode(head,2)->data = (((row==6) ||(row>=8 && row<=15)||(row>=25 && row<=37))&&(col==5 || col==9));

           findNode(head,3)->data = (((row==2 || row==3) && (col==5))|| ((col==2)&&(row==18))||(col==3 &&(row==17 || row==18))||(col==12 && row==22)||(col==11 &&(row==22 || row==23))|| (row==39 && col==9)|| (row==40 && col==8)|| (col==6 && row==21));

           findNode(head,4)->data = (((row==2 || row==3) && (col==9))|| ((col==12)&&(row==18))||(col==11 &&(row==17 || row==18))||(col==2 && row==22)||(col==3 &&(row==22 || row==23))|| (row==39 && col==5)|| (row==40 && col==6)|| (col==6 && row==19));

           findNode(head,5)->data = (((col>=6 && col<=8)&& (row==1 || row==2 || row==6 || row==15 || row==16 || row==24 ))|| ((col>=5 && col<=9) && (row==5 || row==7))|| ((row==4 || row==23) && (col==6 || col==8)));

            findNode(head,6)->data = (((row==17||row==38)&&(col==5||col==9))|| (row==39 && (col==6 || col==8))|| (row==23 && (col==4 || col==10)));

           findNode(head,7)->data = ((row==40 && col==7)|| (row==17 && (col==4 || col==10))|| (row==23 && (col==5 || col==9))|| (col == 7 && row==20));

          findNode(head,8)->data = ((row==16||row==24)&&(col==5||col==9));

           findNode(head,9)->data = (col==4 && (row==16 || row ==24));

          findNode(head,10)->data = ((col==10 && (row==16 || row==24))|| (row==20 && col==14));

          findNode(head,11)->data= (row== 38 &&(col==4 || col==10));

          findNode(head,12)->data = (col==4 && (row==5 || row==7));

          findNode(head,13)->data = (col==10 && (row==5 || row==7));

         findNode(head,14)->data = (col==7 && (row>=34 && row<=37));

           findNode(head,15)->data =(row==17 && col==6);

          findNode(head,16)->data =(row==17 && col==7);

            findNode(head,17)->data =(row==20 && col==11);

         findNode(head,18)->data =(row==23 && col==7);

           findNode(head,19)->data = (row==20 && col==3);
            printLetter(findNode(head,1)->data,'|');
            printLetter(findNode(head,2)->data,':');
            printLetter(findNode(head,3)->data,'/');
            printLetter(findNode(head,4)->data,'\\');
            printLetter(findNode(head,5)->data,'_');
            printLetter(findNode(head,6)->data,'\'');
            printLetter(findNode(head,7)->data,'.');
            printLetter(findNode(head,8)->data,'=');
            printLetter(findNode(head,9)->data,'(');
            printLetter(findNode(head,10)->data,')');
            printLetter(findNode(head,11)->data,';');
            printLetter(findNode(head,12)->data,'[');
            printLetter(findNode(head,13)->data,']');
            printLetter(findNode(head,14)->data,'o');
            printLetter(findNode(head,15)->data,'1');
            printLetter(findNode(head,16)->data,'2');
            printLetter(findNode(head,17)->data,'3');
            printLetter(findNode(head,18)->data,'6');
            printLetter(findNode(head,19)->data,'9');


            if((!findNode(head,1)->data) && (!findNode(head,2)->data) && (!findNode(head,3)->data) && (!findNode(head,4)->data) && (!findNode(head,5)->data) && (!findNode(head,6)->data) && (!findNode(head,7)->data) && (!findNode(head,8)->data) && (!findNode(head,9)->data) && !findNode(head,10)->data && !findNode(head,11)->data &&!findNode(head,12)->data &&!findNode(head,13)->data &&!findNode(head,14)->data && !findNode(head,15)->data && !findNode(head,16)->data && !findNode(head,17)->data && !findNode(head,18)->data && !findNode(head,19)->data){
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
