#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node* next; // Pointer to the next node
};

// Pointer to the top of the stack
struct Node* top = NULL;

// Function to push (insert) an element onto the stack
void push(int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack overflow!\n");
        return;
    }
    newNode->data = data;
    newNode->next = top; // Point newNode to the current top
    top = newNode;       // Update top to the newNode
    printf("%d pushed onto the stack.\n", data);
}

// Function to pop (delete) an element from the stack
void pop() {
    if (top == NULL) { // If the stack is empty
        printf("Stack underflow!\n");
        return;
    }
    struct Node* temp = top; // Temporarily hold the current top node
    top = top->next;         // Update the top to the next node
    printf("%d popped from the stack.\n", temp->data);
    free(temp);              // Free the memory of the popped node
}

// Function to display the stack
void display() {
    if (top == NULL) { // If the stack is empty
        printf("Stack is empty!\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements:\n");
    while (temp != NULL) { // Traverse from top to the end
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function for user interaction
int main() {
    int choice, value;

    while (1) {
        // Menu options for the user
        printf("\nOptions:\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2: // Pop
                pop();
                break;
            case 3: // Display
                display();
                break;
            case 4: // Exit
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
