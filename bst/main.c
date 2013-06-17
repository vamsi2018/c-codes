#include "BST.h"

int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	printf("\nDisplaying nodes in preorder Traversal\n");
	preOrderTraverse(root);
	printf("\nDisplaying nodes in inorder Traversal\n");
	inOrderTraverse(root);
	return 0;
}
