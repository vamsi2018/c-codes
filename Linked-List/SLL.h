#include<stdio.h>
#include<stdlib.h>
struct SLLNode{
	int value;
	struct SLLNode* next;
};
struct SLLNode* create_SLL(struct SLLNode *head, int node_value);
void display(struct SLLNode *head);

struct SLLNode* reverseSLL(struct SLLNode *head);
struct SLLNode* nthNodeFromEnd(int n, struct SLLNode* head);
int isSLLPalindrome(struct SLLNode* head);
struct SLLNode* reverseKNode(int k, struct SLLNode* head);
