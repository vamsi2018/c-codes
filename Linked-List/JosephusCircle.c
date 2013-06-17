#include "SLL.h"
/*
	N people have decided to elect a leader by rearranging themselves in a circle and eliminating every Mth person arond th circle, closing ranks as each person drops out. Find which person will be the last one remaining(rank 1).
*/

int main(){
	struct SLLNode* head,*temp,*temp1;
	int N,M,i=0,tempCount=1;
	printf("Enter number of Players :  ");
	scanf("%d",&N);
	printf("\nEnter M (Mth player to be removed) :  ");
	scanf("%d",&M);
	printf("\n Creating circular linked list");
	head = malloc(sizeof(struct SLLNode));
	head->value = 1;
	temp = head;
	printf("Node %d created\n",head->value);
	for(i=2;i<=N;i++){
		temp->next = malloc(sizeof(struct SLLNode));
		temp = temp->next;
		temp->value = i;
		printf("Node %d created\n",i);
	}
	temp->next = head;
	temp = head;
	printf("head value is %d\n",head->value);
	printf("\n Removing %dth node\n",M);
	for(i=1;i<N;i++){
		while(tempCount++<M){
			temp = temp->next;	
		}
		printf("Removing node %d\n",temp->next->value);
		tempCount=1;
		temp1 = temp->next;
		temp->next = temp->next->next;
		free(temp1);
	}
	printf("Winner Node is %d\n",temp->value);
	return 0;
}
