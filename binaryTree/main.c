#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *right;
    struct tree *left;
};

struct stackStructure{
    int valueArray[15];
    struct tree* nodeArray[15];

};
struct stackStructure stack;
int top = -1;


void pushNode(struct tree* node, int val){
    top++;
    stack.nodeArray[top] = node;
    stack.valueArray[top] = val;

}

struct tree *popNode(){
    return (stack.nodeArray[top]);
};


int popVal(){
    return(stack.valueArray[top--]);
}



struct tree *makeRoot(int val){
    struct tree* rootNode;
    rootNode = (struct tree*)malloc(sizeof(struct tree*));
    rootNode->data = val;
    rootNode->left = NULL;
    rootNode->right = NULL;
    return rootNode;
};

void rightChild(struct tree* root, int val){
    struct tree* newNode;
    newNode = (struct tree*)malloc(sizeof(struct tree*));
    newNode->data = val;
    newNode->right = NULL;
    newNode->left = NULL;
    root->right = newNode;


}

void leftChild(struct tree* root, int val){
    struct tree* newNode;
    newNode = (struct tree*)malloc(sizeof(struct tree*));
    newNode->data = val;
    newNode->right = NULL;
    newNode->left = NULL;
    root->left = newNode;


}

void traverse(struct tree* node){

    struct tree* temp;
    int val;
    temp = node;
    while(1){
       while(temp!=0){
        pushNode(temp, 0);
        temp = temp->left;
       }
       while(top>=0){
        temp = popNode();
        val = popVal();
        if(val == 0){
            if(temp->right != NULL){
                pushNode(temp, 1);
                temp = temp->right;
                break;
            }

        }
        printf("%d\n",temp->data);
        continue;
       }
       if((temp == NULL) || top<0 ){
        break;
       }else{
        continue;
       }

    }
}





int main()
{
    struct tree* temp;
    struct tree *rootNode;
    int val;
    printf("Enter the elements of the tree and 0 to quit");
    scanf("%d",&val);
    rootNode = makeRoot(val);
    while(val != 0){
        temp = rootNode;
        while(1){
            if(val<temp->data){
                if(temp->left != NULL){
                    temp = temp->left;
                    continue;
                }
                leftChild(temp,val);
            }
            if(val>temp->data){
                if(temp->right != NULL){
                    temp = temp->right;
                    continue;
                }
                rightChild(temp,val);
            }
            break;

        }
        scanf("%d",&val);
    }
    printf("\nThe traversal of tree in postorder without recursion:\n");
    traverse(rootNode);
    return 0;
}
