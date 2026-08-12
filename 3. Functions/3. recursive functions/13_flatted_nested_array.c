#include <stdio.h>
typedef struct Node {
    int value;
    struct Node *child;
    struct Node *next;
} Node;
void flatten(Node *node)
{
    if (node == NULL) {
        return;
    }
    if (node->child != NULL) {
        flatten(node->child);
    }
    else {
        printf("%d ", node->value);
    }
    flatten(node->next);
}
int main()
{
    Node n1 = {1, NULL, NULL};
    Node n2 = {2, NULL, NULL};
    Node n3 = {3, NULL, NULL};
    Node n4 = {4, NULL, NULL};
    Node n5 = {5, NULL, NULL};
    n1.next = &n2;
    n2.child = &n3;
    n3.next = &n4;
    n4.next = &n5;
    printf("Flattened array: ");
    flatten(&n1);
    return 0;
}