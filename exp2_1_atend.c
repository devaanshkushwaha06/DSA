#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void linked_list_traverse(struct node *ptr) 
{
    while (ptr != NULL) 
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_at_end(struct node **head, int data) 
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) 
    {
        printf("Memory allocation failed!\n");
        return;
    }

    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) 
    {
        *head = new_node;
    } 
    else 
    {
        struct node *temp = *head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }

        temp->next = new_node;
    }
}

int main() 
{
    struct node *head = NULL;
    struct node *current = NULL;
    struct node *new_node = NULL;

    int n;
    int data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == NULL) 
        {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        new_node->data = data;
        new_node->next = NULL;

        if (head == NULL) 
        {
            head = new_node;
        } 
        else 
        {
            current->next = new_node;
        }

        current = new_node;
    }

    printf("Original linked list:\n");
    linked_list_traverse(head);

    printf("Enter data to insert at the end: ");
    scanf("%d", &data);

    insert_at_end(&head, data);

    printf("Linked list after insertion:\n");
    linked_list_traverse(head);

    current = head;
    while (current != NULL) 
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}