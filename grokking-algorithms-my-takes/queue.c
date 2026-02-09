#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;
typedef struct Queue {
    Node *front;
    Node * rear;
} Queue;

Node* newNode(int data) {
    Node* link = malloc(sizeof(Node));
    if (link == NULL) exit(1);
    link->data = data;
    link->next = NULL;
    return link;
}
Queue* createQueue() {
    Queue *q = malloc(sizeof(Queue));
    if (q == NULL) exit(1);
    q->front = NULL;
    q->rear = NULL;
    return q;
}
void enqueue(Queue *q, int data) {
    Node *link = newNode(data);
    if (link == NULL) exit(1);
    if (q->rear == NULL) {
        q->rear = q->front = link;
        return;
    }
    q->rear->next = link;
    q->rear = link;
}
int dequeue(Queue *q) {
    if (q->front == NULL) {
        printf("Queue underflow\n");
        return -1;
    }
    Node *tmp = q->front;
    int data = tmp->data;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(tmp);
    return data;
}




