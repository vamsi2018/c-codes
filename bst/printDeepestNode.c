#include "BST.h"
struct DeepNode{
	struct BSTNode* node;
	int depth;
};

struct DeepNode* findDeepestNode(struct BSTNode* root,int depth,struct DeepNode* dpn){
	if(root == NULL)
		return dpn;
	if(depth > dpn->depth){
		dpn->node = root;
		dpn->depth = depth;
	}
	dpn = findDeepestNode(root->left,depth+1,dpn);
	dpn = findDeepestNode(root->right,depth+1,dpn);
	
	return dpn; 
}
int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);
	struct DeepNode* dpn = malloc(sizeof(struct DeepNode));
	dpn->node = NULL;
	dpn->depth = 0;
	dpn = findDeepestNode(root,0,dpn);
	printf("\nDeepest node is :%d and depth is %d\n",dpn->node->value,dpn->depth);
}
