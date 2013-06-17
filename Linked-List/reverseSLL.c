#include "SLL.h"

struct SLLNode* reverseSLL(struct SLLNode *head){
	struct SLLNode* prev=NULL;
	struct SLLNode* cur = NULL;
	struct SLLNode* temp = head;
	while(temp != NULL){
		cur = temp->next;
		temp->next = prev;
		prev = temp;
		temp = cur;
	}
	return prev;
}
