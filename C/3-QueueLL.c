#include <stdio.h>
#include <stdlib.h>
#define N 10

struct node {
    int val;
    struct node *next;
};

struct node* getNode(int val) {
    struct node* node = (struct node*)(malloc(sizeof(int)));
    node->val = val;
    return node;
}

struct node *queueHead;
struct node *queueTail;

void insert (int val) {
    if (queueHead == NULL) {
        queueHead = getNode(val);
        queueTail = queueHead;
    } else {
        struct node *temp = getNode(val);
        queueTail->next = temp;
        queueTail = temp;
    }
}

void print() {
    struct node *temp = queueHead;
    printf("\n");
    printf("Head->");
    while(temp != NULL){
        printf("%d--", temp->val);
        temp = temp->next;
    } 
    printf("End \n");
}

void dequeue () {
    if (queueHead == NULL) {
        printf("\n---Queue is Empty \n");
        return;
    } else {
        struct node *temp = queueHead;
        queueHead = queueHead->next;
        printf("%d is removed", temp->val);
        free(temp);
    }
}

int main() {
    int op, val;
    do {
        printf("\n1-> enqueue / 2-> print / 3-> dequeue: ");
        scanf("%d", &op);
        switch(op) {
            case 1 : printf("\nEnter the val to insert: ");
                    scanf("%d", &val);
                    insert(val);
                    break;
            case 2 : print(); break;
            case 3 : dequeue(); break;
        }
    } while(op != -1);
    return 0;
}
