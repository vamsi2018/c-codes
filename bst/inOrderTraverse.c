
#include "BST.h"
void inOrderTraverse(struct BSTNode* root){
	if(root == NULL)
		return;
	inOrderTraverse(root->left);
	printf("Node value : %d\n",root->value);
	inOrderTraverse(root->right);
	return;	
}
