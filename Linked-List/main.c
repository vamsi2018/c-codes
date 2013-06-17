#include "SLL.h"
int main(){
	int exit_value=0;
	int node_value;
	int N;
	int K;
	struct SLLNode* head;
	head = NULL;
	//Insertion into Linked List
	do{

		printf("Enter a value to insert into a linked list\n");
		scanf("%d",&node_value);
		head=create_SLL(head,node_value);
		printf("\nEnter 0 to exit\n");
		scanf("%d",&exit_value);
	}while(exit_value != 0);

	//Displaying Linked List nodes
	printf("\nDisplaying nodes\n");
	display(head);

	//Check if given linkedlist is palindrome or not
	int returnValue = isSLLPalindrome(head);
	if(returnValue)
		printf("Given linkedlist is palindrome\n");
	else
		printf("Given linkedlist is NOT a palindrome\n");
	
	//Reversing the linked list
	printf("Reversing the linked list\n");
	struct SLLNode* reverseHead = reverseSLL(head);
	display(reverseHead);	
	printf("Reversing the linked list again\n");
	head = reverseSLL(reverseHead);
	display(head);

	//Reversing K nodes as a batch in the linked list
	printf("\nEnter K -- batch of nodes to reverse :");
	scanf("%d",&K);
	head = reverseKNode(K,head);
	printf("\nDisplaying nodes\n");
	display(head);

	//Displaying Nth node from end
	do{
		printf("Enter value of N(to display Nth node from end) ");
		scanf("%d",&N);
		struct SLLNode* tempCur = nthNodeFromEnd(N,head);
		if(tempCur == NULL){
			printf("Number of nodes in Linked List are less than %d\n",N);
		}else{
			printf("Value of %dth node from end is %d\n",N,tempCur->value);
		}
		printf("\nEnter 0 to exit\n");
		scanf("%d",&exit_value);
	}while(exit_value != 0);

	//Detecting if the SLL has a cycle or not
	struct SLLNode *cycleHead=NULL;
	cycleHead = (struct SLLNode*)malloc(sizeof(struct SLLNode));
	cycleHead->value=0;

	struct SLLNode *node1=NULL;
	node1 = (struct SLLNode*)malloc(sizeof(struct SLLNode));
	node1->value=1;


	struct SLLNode *node2=NULL;
	node2 = (struct SLLNode*)malloc(sizeof(struct SLLNode));
	node2->value=2;

	cycleHead->next = node1;
	node1->next = node2;
	node2->next = node1;

	printf("Testing cycle Detection for a SLL with cycle\n");
	cycleDetect(cycleHead);


	printf("Testing cycle Detection for a SLL without cycle\n");
	cycleDetect(head);
	return 0;
}
