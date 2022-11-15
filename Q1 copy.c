//Create an ordered singly linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE* getNode(int );
NODE* ordIns(NODE*,int);
void display(NODE*);

//Returns value of node
NODE* getNode(int ele)
{

}
// Ordered insertion
NODE* ordIns(NODE* phead,int ele)
{
	
}

//Display
void display(NODE* phead)
{
	
}

int main()
{
	NODE* head=NULL;
	int choice,ele,pos;
	do{
		printf("1.Insert\n2.Display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter an ele\n");;
					scanf("%d",&ele);
					head=ordIns(head,ele);
					break;
			case 2:display(head);
					break;
		}
	}while(choice<2);
}