#include "SLL.h"
void display(struct SLLNode* head){
	struct SLLNode* temp=NULL;
	temp = head;
	if (temp == NULL){
		printf("No values in linked list\n");
		return;
	}
	while(temp != NULL){
		printf("Node Value : %d \n",temp->value);
		temp = temp->next;
	}
	return;
}
