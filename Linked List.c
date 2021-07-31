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
  for (; head != NULL; head = head->next)
    printf("data = %d\n", head->data);
}
 
int main(void)
{
  int i;
  int array[5];
  ListNode *head;
  ListNode *previous = NULL;
 
  for (i = 0; i < 5; i++)
    scanf("%d", &(array[i]));
  for (i = 0; i < 5; i++) {
    head = (ListNode *)malloc(sizeof(ListNode));
    assert(head != NULL);
    head->data = array[i];
    head->next = previous;
    previous = head;
  }
  print_linked_list(head);
  return 0;
}
 
