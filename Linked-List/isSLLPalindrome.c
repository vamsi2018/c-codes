#include "SLL.h"

int isSLLPalindrome(struct SLLNode* head){
	struct SLLNode* temp = head;
	int length = 0;
	while(temp != NULL){
		temp = temp->next;
		length++;
	}
	temp = head;
	int mid=0,i=0,flag=0;
	if(length%2 == 0){
		mid = length/2 + 1;
	}else{
		mid = length/2 + 2;
	}
	
	while(++i < mid)
		temp = temp->next;
	struct SLLNode* reverseSLLMid = reverseSLL(temp)	;
	temp = reverseSLLMid;
	printf("temp : %p\n",temp);
	while(temp != NULL){
		flag = (temp->value == head->value);
		printf("temp->value : %d\n",temp->value);
		printf("head->value : %d\n",head->value);
		temp = temp->next;
		head = head->next;

		if(!flag){
			reverseSLL(reverseSLLMid);
			return 0;
		}
	}
	if(flag){
		reverseSLL(reverseSLLMid);
		return 1;
	}
}
