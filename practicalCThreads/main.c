#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t pop_mutex;
pthread_mutex_t push_mutex;

int stack[10];
int top = -1;

void *push(void *arg){
    int n;
    pthread_mutex_lock(&push_mutex);
    sleep(2);
    pthread_mutex_lock(&pop_mutex);
    printf("Enter the value to push: ");
    scanf("%d",&n);
    top++;
    stack[top] = n;
    pthread_mutex_unlock(&pop_mutex);
    pthread_mutex_unlock(&push_mutex);
    printf("\nValue is pushed to stack \n");

}

void *pop(void *arg){
    int k;
    pthread_mutex_lock(&push_mutex);
    sleep(5);
    pthread_mutex_lock(&pop_mutex);
    k = stack[top];
    top--;
    printf("The value popped is %d",k);
    pthread_mutex_unlock(&pop_mutex);
    pthread_mutex_unlock(&push_mutex);
}




int main()
{
    pthread_t tid1,tid2;

    pthread_create(&tid1,NULL,&push,NULL);
    pthread_create(&tid2,NULL,&pop,NULL);
    printf("both threads are created");

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    return 0;
}
