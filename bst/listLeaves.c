#include "BST.h"

void listLeaves(struct BSTNode* root){
	if(root == NULL)
		return;
	if(!root->left && !root->right)
		printf("Leaf Node : %d\n",root->value);
	listLeaves(root->left);
	listLeaves(root->right);
	
	return;
}

int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	printf("\nPrinting LeafNodes \n");
	listLeaves(root);	
}
