#define new_max(x,y) (((x) >= (y)) ? (x) : (y))
#define new_min(x,y) (((x) <= (y)) ? (x) : (y))

/**
 * Definition for a binary tree node.
struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNodeDepth {
    struct TreeNode* treeNode;
    int depth;
} TreeNodeDepth;


typedef struct {
    int front;
    int rear;
    int numElements;
    struct TreeNode** elements;
 } Queue;

 typedef struct {
    int top;
    int numElements;
    struct TreeNodeDepth** elements;
 } Stack;


void stack(Stack* s, struct TreeNodeDepth* element){
    
    s->top++;
    s->elements[s->top] = element;
}

struct TreeNodeDepth* pop(Stack* s){
    struct TreeNodeDepth* frontElement = s->elements[s->top];
    s->elements[s->top] = NULL;
    s->top--;
    return frontElement;
}

void queue(Queue* q, struct TreeNode* element){
    q->elements[q->rear] = element;
    q->rear = (q->rear+1)%q->numElements;
}

struct TreeNode* dequeue(Queue* q){
    struct TreeNode* frontElement = q->elements[q->front];
    q->elements[q->front] = NULL;
    q->front = (q->front+1)%q->numElements;
    return frontElement;
}

int rdfs(struct TreeNode* currentNode){
    // base case recursion
    if(currentNode == NULL) return 0;
    int length_subtree = 1 + new_max(rdfs(currentNode->left), rdfs(currentNode->right));
    
    return length_subtree;
}

int ibfs(Queue* q, struct TreeNode* currentNode){
    if(currentNode == NULL) return 0;
    int level = 0;
    queue(q, currentNode);
    while(q->elements[q->front] != NULL){
        int lenQueue = abs(q->rear - q->front);
        for(int i=0; i < lenQueue; i++){
           struct TreeNode* nextNode = dequeue(q);

           if(nextNode->left != NULL){
                queue(q, nextNode->left);
           }
           if(nextNode->right != NULL){
                queue(q, nextNode->right);
           }
        }
        level++;
    }
    return level;
}

int idfs(Stack* s, struct TreeNode* currentNode){
    if(currentNode == NULL) return 0;
    int level = 0;

    TreeNodeDepth* root = malloc(sizeof(TreeNodeDepth));
    root->treeNode = currentNode;
    root->depth = 1;

    stack(s, root);

    while(1){
        struct TreeNodeDepth* nextNode = pop(s);

        if(nextNode->treeNode != NULL){
            level = new_max(level, nextNode->depth);
            if(nextNode->treeNode->right != NULL){
                TreeNodeDepth* rightElement = malloc(sizeof(TreeNodeDepth));
                rightElement->treeNode = nextNode->treeNode->right;
                rightElement->depth = nextNode->depth + 1;
                stack(s, rightElement);
            }
            if(nextNode->treeNode->left != NULL){
                TreeNodeDepth* leftElement = malloc(sizeof(TreeNodeDepth));
                leftElement->treeNode = nextNode->treeNode->left;
                leftElement->depth = nextNode->depth + 1;
                stack(s, leftElement);
            }
            printf("level %d\n", s->top);
            if(s->top < 0) break;
        }
        free(nextNode);  // Don't forget to free the memory
    }
    return level;
}

int maxDepth(struct TreeNode* root) {
  // recursive depth first search (time complexity O(n) | space complexity (depends on height of tree, worst case O(n)))
  //return rdfs(root);

  // iterative depth first search (same time and space complexity as rdfs)
  //Stack s = {-1, 10e4, calloc(10e4, sizeof(struct TreeNodeDepth*))};
  //return idfs(&s, root);

  // iterative breadth first search (same time and space complexity as rdfs)
  Queue q = {0,0,10e4, calloc(10e4, sizeof(struct TreeNode*))};
  return ibfs(&q, root);
}

void createExampleTreeAndRunMaxDepth() {
  // Create an example binary tree
  struct TreeNode* root = malloc(sizeof(struct TreeNode));
  root->val = 3;
  
  struct TreeNode* node1 = malloc(sizeof(struct TreeNode));
  node1->val = 9;
  
  struct TreeNode* node2 = malloc(sizeof(struct TreeNode));
  node2->val = 20;
  
  struct TreeNode* node3 = malloc(sizeof(struct TreeNode));
  node3->val = 15;
  
  struct TreeNode* node4 = malloc(sizeof(struct TreeNode));
  node4->val = 7;
  
  root->left = node1;
  root->right = node2;
  node2->left = node3;
  node2->right = node4;
  node1->left = NULL;
  node1->right = NULL;
  node3->left = NULL;
  node3->right = NULL;
  node4->left = NULL;
  node4->right = NULL;
  
  // Run maxDepth on the created binary tree
  int depth = maxDepth(root);
  
  printf("Maximum depth of the binary tree: %d\n", depth);
}