#include "SLL.h"

struct SLLNode* nthNodeFromEnd(int n, struct SLLNode* head){
	struct SLLNode* temp = head;
	struct SLLNode* tempCur = head;
	int i=1;
	int j=0;
/*
	while((i <= n) && temp->next != NULL){
		temp = temp->next;
		i++;
	}
	if((temp!= NULL)&&(temp->next == NULL)&&(i!=n)){
		i++;
	}
	if((i<n)||(n == 0)){
		return NULL;
	}
*/
//	temp = temp->next;
	while(temp!=NULL){
		temp = temp->next;
		j++;
		if(j>n)
			tempCur = tempCur->next;
	}
	if(j>=n)
		return tempCur;
	else
		return NULL;
	//printf("nth node from end is :: %d\n",tempCur->value);
	//return tempCur;
}
