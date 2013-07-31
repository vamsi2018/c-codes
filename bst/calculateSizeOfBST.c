#include "BST.h"
int calculateSizeOfBST(struct BSTNode* root){
	if(root == NULL){
		return 0;
	}
	return (calculateSizeOfBST(root->left) + 1 + calculateSizeOfBST(root->right));
}
