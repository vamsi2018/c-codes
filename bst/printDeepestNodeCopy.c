#include "BST.h"
struct DeepNode{
	struct BSTNode* node;
	int depth;
};

void findDeepestNodeCopy(struct BSTNode* root,int depth,struct DeepNode* dpn){
	if(root == NULL)
		return ;
	if(depth > dpn->depth){
		dpn->node = root;
		dpn->depth = depth;
	}
	findDeepestNodeCopy(root->left,depth+1,dpn);
	findDeepestNodeCopy(root->right,depth+1,dpn);
	
	return ; 
}
int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	struct DeepNode* dpn = malloc(sizeof(struct DeepNode));
	dpn->node = NULL;
	dpn->depth = 0;
	findDeepestNodeCopy(root,0,dpn);
	printf("\nDeepest node is :%d and depth is %d\n",dpn->node->value,dpn->depth);
}
