#include "BST.h"


void levelOrderTraverseRecursive(struct QueueElem queue[],int nodePosition,int end,int level){
	if(nodePosition>=end)
		return;	
	if(level!= queue[nodePosition].level){
		printf("\n%d ",queue[nodePosition].node->value);
	}else{
		printf("%d ",queue[nodePosition].node->value);
	}
	if(queue[nodePosition].node->left!=NULL){
		queue[end].node= queue[nodePosition].node->left;
		queue[end].level= queue[nodePosition].level+1;
		end++;
	}
	if(queue[nodePosition].node->right != NULL){
		queue[end].node= queue[nodePosition].node->right;
		queue[end].level= queue[nodePosition].level+1;
		end++;
	}
	if((nodePosition)<end)
		levelOrderTraverseRecursive(queue,nodePosition+1,end,queue[nodePosition].level);
	return;
	
}

int main(){

	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);

	struct QueueElem queue[calculateSizeOfBST(root)];
	queue[0].node=root;
	queue[0].level=0;;
	levelOrderTraverseRecursive(queue,0,1,-1);
	printf("\n");
	
}
