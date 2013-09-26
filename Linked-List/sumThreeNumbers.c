/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
struct LinkedListNode* reverseSLL(struct LinkedListNode *head){
	struct LinkedListNode* prev=NULL;
	struct LinkedListNode* cur = NULL;
	struct LinkedListNode* temp = head;
	while(temp != NULL){
		cur = temp->next;
		temp->next = prev;
		prev = temp;
		temp = cur;
	}
	return prev;
}
LinkedListNode* addThreeLinkedLists(LinkedListNode* head1, LinkedListNode* head2, LinkedListNode* head3) {
    struct LinkedListNode* reverseHead1 = reverseSLL(head1);
    struct LinkedListNode* reverseHead2 = reverseSLL(head2);
    struct LinkedListNode* reverseHead3 = reverseSLL(head3);
    struct LinkedListNode* prev=NULL;
    int sumDigit=0,carry=0;
    struct LinkedListNode* reverseSum = malloc(sizeof(struct LinkedListNode));
    struct LinkedListNode* temp = reverseSum;
    while(reverseHead1!=NULL||reverseHead2!=NULL||reverseHead3!=NULL){
        sumDigit=0;
        if(reverseHead1!=NULL){
            sumDigit+=reverseHead1->val;
            reverseHead1=reverseHead1->next;
        }
        if(reverseHead2!=NULL){
            sumDigit+=reverseHead2->val;
            reverseHead2=reverseHead2->next;
        }
        if(reverseHead3!=NULL){
            sumDigit+=reverseHead3->val;
            reverseHead3=reverseHead3->next;
        }
        sumDigit+=carry;
        carry=sumDigit/10;
        temp->val=sumDigit%10;
        temp->next=malloc(sizeof(struct LinkedListNode));
        prev=temp;
        temp=temp->next;
    }
    if(carry>0){
        prev->next->val=carry;
        prev->next->next=NULL;
    }else{
        prev->next=NULL;
    }
    struct LinkedListNode* sumList = reverseSLL(reverseSum);
    while(sumList!=NULL){
        printf("%d\n",sumList->val);
        sumList=sumList->next;
    }
}
