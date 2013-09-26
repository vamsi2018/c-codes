#include "BST.h"

void unionBST(struct BSTNode* root1, struct BSTNode* root2,int isR1,int isR2){
	if((isR1&&!root1)&&(isR2&&!root2))
		return;
	if(isR1&&root1)
		unionBST(root1->left,root2,1,0);
	if(isR2&&root2)
		unionBST(root1,root2->left,0,1);
	if(root1&&root2){	
		if(root1->value < root2->value){
			printf("%d ",root1->value);
			unionBST(root1->right,root2,1,0);
		}
		else if(root1->value > root2->value){
			printf("%d ",root2->value);
			unionBST(root1,root2->right,0,1);
		}else{
			printf("%d ",root2->value);
			unionBST(root1->left,root2->right,1,1);
		}
	}else if(root1&&!root2){
		printf("%d ",root1->value);
		unionBST(root1->right,root2,1,0);
	}else if(!root1&&root2){
		printf("%d ",root2->value);
		unionBST(root1,root2->right,0,1);

	}
	return;
}

int main(){
	printf("Creating a binary search tree\n");
	struct BSTNode* root =NULL;
	root = createBST(root);

	printf("Creating another binary search tree\n");
	struct BSTNode* root1 =NULL;
	root1 = createBST(root);

	unionBST(root,root1,1,1);
	return 0;

}
