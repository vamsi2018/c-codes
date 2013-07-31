#include "BST.h"
int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	printf("\nSize of BST is %d",calculateSizeOfBST(root));
	printf("\nDisplaying nodes in preorder Traversal\n");
	preOrderTraverse(root);
	printf("\nDisplaying nodes in inorder Traversal\n");
	inOrderTraverse(root);
	printf("\nDisplaying nodes in levelOrder Traversal\n");
	levelOrderTraverse(root);
	return 0;
}
