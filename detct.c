// C program to detect loop in a linked list
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
typedef struct Node {
 int data;
 struct Node* next;
 int flag;
} Node;

void push(struct Node** head_ref, int new_data)
{
 /* allocate node */
 struct Node* new_node = (Node*)malloc(sizeof(Node));

 /* put in the data */
 new_node->data = new_data;

 new_node->flag = 0;

 /* link the old list off the new node */
 new_node->next = (*head_ref);

 
 (*head_ref) = new_node;
}


bool detectLoop(struct Node* h)
{
 while (h != NULL) {
  
  if (h->flag == 1)
   return true;


  h->flag = 1;

  h = h->next;
 }

 return false;
}

/* Driver program to test above function*/
int main()
{
 /* Start with the empty list */
 struct Node* head = NULL;

 push(&head, 20);
 push(&head, 4);
 push(&head, 15);
 push(&head, 10);

 /* Create a loop for testing */
 head->next->next->next->next = head;

 if (detectLoop(head))
  printf("Loop found");
 else
  printf("No Loop");

 return 0;
}


