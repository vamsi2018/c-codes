#include "BST.h"

struct BSTNode* bst2dll(struct BSTNode* root, struct BSTNode* prev){
	if(root==NULL)
		return prev;
	prev = bst2dll(root->left,prev);
	root->left = prev;
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

	while(temp!= NULL){
		printf("%d\n",temp->value);
		temp = temp->left;
	}	


	return 0;
}
