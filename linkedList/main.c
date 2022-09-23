#include <stdio.h>
#include <stdlib.h>
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

struct node* reverseList(struct node* head){
    if(totalNodes() != 1){
    struct node * current;
    struct node * newNode;
    struct node * previous;

    for(current = head; current != NULL;current = newNode){
        newNode = current->next;
        current->next = previous;
        previous = current;

    }
    head->next = NULL;
    head = previous;
    }
    return head;

};

struct node * lastNode(struct node *head){
    struct node* last = NULL;

    for(last=head;last!=NULL && last->next != NULL;){
        last = last->next;

    }
    return last;

};

int totalNodes(struct node* head){
    struct node* current = NULL;
    int count = 0;
    for(current = head; current!= NULL;){
        count = count + 1;
        current = current->next;

    }
    return count;



}


struct node* buildLinkedList(struct node* head, int totalNodes) {
        printf("\n Add nodes = %d \n",totalNodes);

        struct node *last = NULL;
        last = lastNode(head);
        for( int data = 1; data <= totalNodes; data++){
            struct node * newNode = NULL;

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


void printList(struct node* head){
    struct node* current;
    for(current = head;current!=NULL;){
        printf("%d-->",current->data);
        current = current->next;

    }
    printf("NULL");
}


int main()
{
    struct node* head = NULL;
    head = buildLinkedList(head, 1);
    printList(head);


    printf("\n");
    head = reverseList(head);

    printList(head);

    return 0;
}
