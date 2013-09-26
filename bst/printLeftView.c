/*
struct BTreeNode{
   int val;
   BTreeNode *left,*right;
};
*/
struct DeepNode{
    struct BTreeNode* node;
    int depth;
};
struct DeepNode* findDeepestNode(struct BTreeNode* root,int depth,struct DeepNode* dpn){
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

void printLeftViewOfTree(BTreeNode* root,int *levelArray,int depth){
    if(root==NULL)
        return;
    if(levelArray[depth]==0){
          printf("%d ",root->val);
        levelArray[depth]=1;
    }
    printLeftViewOfTree(root->left,levelArray,depth+1);
    printLeftViewOfTree(root->right,levelArray,depth+1);
    return;
}

void printLeftView(BTreeNode *root) {
struct DeepNode* dpn = malloc(sizeof(struct DeepNode));
	dpn->node = NULL;
	dpn->depth = 0;
	dpn = findDeepestNode(root,0,dpn);
    
    int *levelArray=malloc(sizeof(int)*dpn->depth);
    int i=0;
    for(i=0;i<=dpn->depth;i++){
        levelArray[i]=0;
    }
    printLeftViewOfTree(root,levelArray,0);
}
