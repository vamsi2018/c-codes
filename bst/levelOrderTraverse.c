#include "BST.h"
struct LevelOrder{
	struct BSTNode* node;
	int level;
};
void levelOrderTraverse(struct BSTNode* root){
	struct LevelOrder levelOrderArray[calculateSizeOfBST(root)];
	int bottom=1,top=0,level =-1;
	levelOrderArray[0].node = root;
	levelOrderArray[0].level=0;
	while(top<bottom){
		if(level == levelOrderArray[top].level){
			printf("%d ",levelOrderArray[top].node->value);
		}else{
			level = levelOrderArray[top].level;
			printf("\n Level %d : ",level);
			printf("%d ",levelOrderArray[top].node->value);
			
		}
		if(levelOrderArray[top].node->left != NULL){
			levelOrderArray[bottom].node = levelOrderArray[top].node->left;
			levelOrderArray[bottom].level = levelOrderArray[top].level +1;
			bottom++;
		}
		if(levelOrderArray[top].node->right != NULL){
			levelOrderArray[bottom].node = levelOrderArray[top].node->right;
			levelOrderArray[bottom].level = levelOrderArray[top].level +1;
			bottom++;
		}
		top++;
	}
	printf("\n");
}
