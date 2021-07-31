#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
struct listnode {
  int data;
  struct listnode *next;
};
 
typedef struct listnode ListNode;  
 
void print_linked_list(ListNode *head)
{
  if (head == NULL) {
    printf("\n");
    return;
  }
  printf("data = %d\n", head->data);
  print_linked_list(head->next);
}
 
ListNode *insert_linked_list(ListNode *head, 
			     int data)
{
  ListNode *current = 
    (ListNode *)malloc(sizeof(ListNode));
  assert(current != NULL);
  current->data = data;
  if (head == NULL || data < head->data) {
    current->next = head;
    return(current);
  }
  head->next = 
    insert_linked_list(head->next, data);
  return(head);
}
 
ListNode *delete_linked_list(ListNode *head, 
			     int data)
{
  ListNode *temp;
  if (head == NULL)
    return NULL;
  if (data == head->data) {
    temp = head->next;
    free(head);
    return(temp);
  }
  head->next = 
    delete_linked_list(head->next, data);
  return(head);
}
 
int main(void)
{
  int i;
  int insert_keys[5];
  int delete_keys[3];
  for (i = 0; i < 5; i++)
    scanf("%d", &(insert_keys[i]));
  for (i = 0; i < 3; i++)
    scanf("%d", &(delete_keys[i]));
  ListNode *head = NULL;
  for (i = 0; i < 5; i++)
    head = 
      insert_linked_list(head, insert_keys[i]);
  print_linked_list(head);
  for (i = 0; i < 3; i++)
    head = 
      delete_linked_list(head, delete_keys[i]);
  print_linked_list(head);
  return 0;
}
 
