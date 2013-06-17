#include "SLL.h"

struct SLLNode* create_SLL(struct SLLNode *head,int node_value){
	if(head == NULL){
		head=malloc(sizeof(struct SLLNode));
		if(head==NULL){
			printf("Sorry memory insufficient\n");
			exit(0);
		}
		head->next = NULL;
		head->value = node_value;
		return head;
	}
	struct SLLNode* temp=NULL;
	temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}

	//Create a new node to append to the single linked list
	temp->next = malloc(sizeof(struct SLLNode));
	temp = temp->next;
	if(temp == NULL){
		printf("Sorry memory insufficient\n");
		exit(0);
	}	
	temp->value = node_value;
	temp->next = NULL;
	return head;
}
