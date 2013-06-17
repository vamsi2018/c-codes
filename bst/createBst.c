#include "BST.h"
/*
	This method helps in creating a binary search node.
	This method needs root of the tree as argument and it finally returns the root of the fully constructed tree.
*/
struct BSTNode* createBST(struct BSTNode* root){
	int value,flag=0;
	struct BSTNode* temp =root;
	root = malloc(sizeof(struct BSTNode));
	root->left = NULL;
	root->right = NULL;
	printf("Please enter root value : ");
	scanf("%d",&(root->value));
	temp = root;
	printf("\nPlease enter next value (0 to exit): ");
	scanf("%d",&value);
	while(value != 0 ){
		/*
			The inner loop is for traversing to the parent node of the node to be inserted
		*/
		while(flag!=1){
			if(value < temp->value){
				if(temp->left != NULL){
					temp = temp->left;
				}else{
					flag = 1;
				}
			}else{
				if(temp->right != NULL)
					temp = temp->right;
				else
					flag = 1;
			}
		}
		flag = 0;
		//This if condition is to insert the node as either left or right child of the node depending on its value
		if(value < temp->value){
			temp->left = malloc(sizeof(struct BSTNode));
			temp = temp->left;
			temp->value = value;
			temp->left = NULL;
			temp->right = NULL;
		}else{

			temp->right = malloc(sizeof(struct BSTNode));
			temp = temp->right;
			temp->value = value;
			temp->left = NULL;
			temp->right = NULL;
		}
		//Reinitializing the temp pointer so that it is ready for inserting the next node
		temp = root;

		printf("\nPlease enter next value (0 to exit):");
		scanf("%d",&value);
	}
	return root;
}
