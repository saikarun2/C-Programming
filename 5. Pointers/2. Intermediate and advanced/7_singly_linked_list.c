#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *insert_end(Node *head, int data) {
    Node *new_node = malloc(sizeof *new_node);
    if (!new_node) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    if (!head){
        return new_node;
    }
    Node *p = head;
    while (p->next){
        p = p->next;
    }
    p->next = new_node;
    return head;
}
Node *delete_value(Node *head, int data) {
    Node **p = &head;
    while (*p && (*p)->data != data){
        p = &(*p)->next;
    }
    if (*p) {
        Node *temp = *p;
        *p = temp->next;
        free(temp);
    }
    return head;
}
void display(const Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    puts("NULL");
}
void free_list(Node *head) {
    while (head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
int main() {
    Node *head = NULL;
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    printf("Linked List: ");
    display(head);
    head = delete_value(head, 20);
    printf("After deletion: ");
    display(head);
    free_list(head);
    return 0;
}
