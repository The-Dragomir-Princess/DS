struct BinaryTree
{
	int data;
	struct BinaryTree* left;
	struct BinaryTree* right;
};
	typedef struct BinaryTree BT;

struct stack
{
	struct stack* ptr;
	struct stack* next;
};
	typedef struct stack S;
void push(S** top, S* ptr);
BT* pop(S** top);
bool isEmpty(S* top);

void InOrder(BT* root)
{
	
