#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void createCircularLinkedList();
void printLinkedList();



int main()
{
    int operation = 0;
    while(operation !=3){
        printf("Which Operation Would You Like To Perform:\n1.Create Linked List\n2.Print Linked List \n3.End\nValue:");
        scanf("%d",&operation);

        switch(operation){
            case 1:
                createCircularLinkedList();
                break;
            case 2:
                printLinkedList();
                break;
            case 3:
                break;
            default:
                printf("\nIncorrect Operation Entered\n");
                break;
        }

    }
    return 0;
}


createCircularLinkedList(){
    int noOfNodes = 0;
    printf("\nEnter the number of nodes you wish to add:");
    scanf("%d",&noOfNodes);
    printf("\n%d no of Nodes To Be Added\n",noOfNodes);
    for(int i=1;i<=noOfNodes;i++){
        int data = 0;
        printf("Enter the data of node no. %d:",i);
        scanf("%d",&data);

        struct node* newNode = (struct node*)malloc(sizeof(struct node*));
        if(head == NULL){
            head = newNode;
            newNode->data = data;
            newNode->next = head;

        }else{
            struct node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->data = data;
            newNode->next = head;
        }
        printf("Node %d added successfull\n",i);

    }

}



printLinkedList(){

    printf("The Numbers Of The Linked List In order is:\n");
    struct node* temp = head;
    printf("%d\n",temp->data);
    temp = temp->next;
    while(temp != head){
        printf("%d\n",temp->data);
        temp = temp->next;
    }

}

