#include "BST.h"
void preOrderTraverse(struct BSTNode* root){
	if(root == NULL)
		return;
	printf("Node value : %d\n",root->value);
	preOrderTraverse(root->left);
	preOrderTraverse(root->right);
	return;	
}
