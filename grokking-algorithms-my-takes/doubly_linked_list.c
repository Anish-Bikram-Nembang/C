#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) exit(1);
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void print_list(Node *list) {
    Node *tmp = list;
    while (tmp != NULL) {
        printf("%d->", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}
void free_list(Node *list) {
    Node *tmp;
    while (list != NULL) {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}
Node* insert_at_end(Node *list, int data) {
    Node *newNode = createNode(data);

    if (list == NULL) {
        return newNode;
    }

    Node *tmp = list;

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = newNode;
    newNode->prev = tmp;
    return list;
    
}
void print_reverse(Node *list) {
    while (list->next != NULL)
        list = list->next;
    while (list != NULL) {
        printf("%d<-", list->data);
        list = list->prev;
    }
    printf("NULL\n");
}


int main(void) {
    Node *list = NULL;
    int n, data;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &data);
        list = insert_at_end(list, data);
    }
    print_list(list);
    print_reverse(list);
    free_list(list);
    return 0;
}


