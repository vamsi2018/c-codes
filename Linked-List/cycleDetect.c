#include "SLL.h"

void cycleDetect(struct SLLNode *head){
	int i=0;
	struct SLLNode *temp=head;
	struct SLLNode *tempCur = head;
	while(temp != NULL){
		printf("node Value = %d\n",temp->value);
		i++;
		if(i==5){
			tempCur = tempCur->next;
			printf("tempNode Value = %d\n",tempCur->value);
			i=0;
		}
		temp = temp->next;
		if(tempCur == temp){
			printf("Cycle Detected\n");
			return;
		}

	}
	printf("The given Singly Linked List is terminated with NULL\n");
	return;
}
