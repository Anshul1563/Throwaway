/*Create a Binary search tree using implicit array representation and 
do the preorder, inorder, and postorder traversal on the same.*/
#include<stdio.h>

#define MAX 20
typedef struct node
{
	int info;
	int used;
}NODE;

void initTree(NODE bst[MAX])
{
	for (int i = 0; i < MAX; i++)
		bst[i].used = 0;
}

void createTree(NODE bst[MAX])
{
	int ele, choice;
	printf("Enter root info\n");
	scanf("%d", &ele);

	bst[0].info = ele;
	bst[0].used = 1;

	printf("Do you want to add one more node\n");
	scanf("%d", &choice);
	int i;
	while (choice)
	{
		printf("Enter node info\n");
		scanf("%d", &ele);
		i = 0;
		while (i < MAX && bst[i].used)
		{
			if (ele < bst[i].info)
				i = 2 * i + 1;
			else
				i = 2 * i + 2;
		}
		if (i >= MAX)
		{
			printf("Can't insert, outside array bound\n");
			break;
		}
		bst[i].info = ele;
		bst[i].used = 1;
		printf("Do you want to add one more node\n");
		scanf("%d", &choice);
	}
}

void inorder(NODE bst[MAX], int i)
{
	if (i < MAX && bst[i].used)
	{
		inorder(bst, 2 * i + 1);
		printf("%d ", bst[i].info);
		inorder(bst, 2 * i + 2);
	}
}
void preorder(NODE bst[MAX], int i)
{
	if (i < MAX && bst[i].used)
	{
		printf("%d ", bst[i].info);
		preorder(bst, 2 * i + 1);
		preorder(bst, 2 * i + 2);
	}
}
void postorder(NODE bst[MAX], int i)
{
	if (i < MAX && bst[i].used)
	{
		postorder(bst, 2 * i + 1);
		postorder(bst, 2 * i + 2);
		printf("%d ", bst[i].info);
	}
}
int main()
{
	NODE bst[MAX];
	
	initTree(bst);
	createTree(bst);
	
	printf("\nInorder Traversal\n");
	inorder(bst,0);

	printf("\nPreorder Traversal\n");
	preorder(bst,0);
	
	printf("\nPostorder Traversal\n");
	postorder(bst,0);
}