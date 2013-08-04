#include<stdio.h>
#include<stdlib.h>
struct BSTNode{
 int value;
 struct BSTNode* left;
 struct BSTNode* right;

};

struct QueueElem{
	struct BSTNode* node;
	int level;
};

void preOrderTraverse(struct BSTNode* root);
void inOrderTraverse(struct BSTNode* root);
struct BSTNode* createBST(struct BSTNode* root);
void levelOrderTraverse(struct BSTNode* root);
int calculateSizeOfBST(struct BSTNode* root);
void levelOrderTraverseRecursive(struct QueueElem queue[],int nodePosition,int end,int level);
