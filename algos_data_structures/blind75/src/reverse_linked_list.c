#include <stdio.h>
#include <stdlib.h>

// A linked list can be reversed either iteratively or recursively. Could you implement both?

struct ListNode {
      int val;
      struct ListNode *next;
};

struct ListNode* reverseNode(struct ListNode *currentNodePointer, struct ListNode *previousNodePointer){
    printf("currentNodePointer: %p\n", currentNodePointer);
    printf("val: %d\n",currentNodePointer->val);
    
    struct ListNode *tmpCurrentNodeNextPointer = currentNodePointer->next;
    if(previousNodePointer != NULL){
      if(currentNodePointer->next == NULL){
        currentNodePointer->next = previousNodePointer;
        return currentNodePointer;
      }
      currentNodePointer->next = previousNodePointer;    
    }else{
      currentNodePointer->next = NULL;
    }
    printf("nextNodePointer: %p\n", currentNodePointer->next);
    previousNodePointer = currentNodePointer;

    return reverseNode(tmpCurrentNodeNextPointer, previousNodePointer);
}
 
struct ListNode* reverseList(struct ListNode* head) {
  if(head == NULL || head->next == NULL){
    return head;
  }

  printf("head: %d\n", head->val);
  
  struct ListNode *currentNodePointer = head;
  struct ListNode *previousNodePointer = NULL;
  // iterative
  /* 
  while(1){
    struct ListNode *tmpCurrentNodeNextPointer = currentNodePointer->next;
    if(previousNodePointer != NULL){

      if(currentNodePointer->next == NULL){

        currentNodePointer->next = previousNodePointer;
        break;

      }
      currentNodePointer->next = previousNodePointer;    
    }else{
      currentNodePointer->next = NULL;
    }

    previousNodePointer = currentNodePointer;

    currentNodePointer = tmpCurrentNodeNextPointer;
  }
  */

  // recursive
  currentNodePointer = reverseNode(currentNodePointer, previousNodePointer);
  printf("currentNodePointer: %p\n", currentNodePointer);
  printf("\nReversed\n");
  struct ListNode *tmpCurrentNodePointer = currentNodePointer;
  while(1){
    printf("%d", tmpCurrentNodePointer->val);
    if(tmpCurrentNodePointer->next == NULL){
      break;
    }
   
    tmpCurrentNodePointer = tmpCurrentNodePointer->next;
  }
}

int main (){
  struct ListNode node4 = {5, NULL};
  struct ListNode node3 = {4, &node4};
  struct ListNode node2 = {3, &node3};
  struct ListNode node1 = {2, &node2};
  struct ListNode head = {1, &node1};

  reverseList(&head);
  return 0;
}
