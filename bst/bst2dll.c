#include "BST.h"

struct BSTNode* bst2dll(struct BSTNode* root, struct BSTNode* prev){
	if(root==NULL)
		return prev;
	prev = bst2dll(root->left,prev);
	root->left = prev;
	if(prev)
		prev->right = root;
	prev = root;
	prev = bst2dll(root->right,prev);
	return prev;
}

int main(){
	
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	struct BSTNode* prev = NULL;	
	struct BSTNode* temp=bst2dll(root,prev);
	struct BSTNode* temp1;
	while(temp!= NULL){
		printf("%d\n",temp->value);
		temp1 = temp;
		temp = temp->left;
		
	}	

	while(temp1!=NULL){
		printf("%d\n",temp1->value);
		temp1 = temp1->right;
	}
	return 0;
}
