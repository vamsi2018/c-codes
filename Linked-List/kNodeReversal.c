#include "SLL.h"

struct SLLNode* reverseKNode(int k, struct SLLNode* head){
	struct SLLNode* temp=head;
	struct SLLNode* prev = NULL;
	struct SLLNode* last = head;
	struct SLLNode* cur = NULL;
	int i=1;
	//Terminating condition for the recursion
	if(head == NULL)
		return NULL;
	/* This loop reverses the linked list with K nodes as a batch
	   If the linked list is 1->2->3->4->5->6->7 and K = 2 then after applying this function to the linked list, new linked list will be 2->1->4->3->6->5->7 
	   Here the condition i<=k ensures that only first K nodes are reversed.
	   The recursion part i.e last->next = reverseKNode(k,temp) ensures that the 'last' node of the first K nodes, points to the head of the next reversed K nodes*/
	while((i <= k) && (temp != NULL)){
		cur = temp;
		temp = cur->next;
		cur->next = prev;
		prev = cur;
		i++;
		if((i-1 == k)||(temp == NULL))
			last->next = reverseKNode(k,temp);
	}
	return prev;
}
