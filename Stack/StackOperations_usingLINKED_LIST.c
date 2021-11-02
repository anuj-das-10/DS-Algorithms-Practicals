//Program to implement all operations of Stack using Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};

struct Node *Top = NULL;

void Push(int x);
void Pop();
void Display_Stack()
{
	struct Node *ptr;
	if(Top == NULL){
		printf("\nStack is Empty..!! ");
	}
	else{
		ptr = Top;
		printf("Elements present in the Stack: ");
		while(ptr != NULL){
			printf("%d  ",ptr->data);
			ptr = ptr->link;
		}
	}
	printf("\n\n");
}


int main()
{
	 int ch, val;

    do {
    printf("<------- STACK OPERATIONS ------->\n");
    printf("1. PUSH Elements\n");
    printf("2. POP Elements\n");
    printf("3. Display Elements in Stack\n");
    printf("4. Exit\n");
    printf("<-------------------------------->\n\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
      switch(ch) {
        case 1: 	printf("Enter Element to be Pushed: ");
            		scanf("%d",&val);
            		Push(val);
            		break;
         
	case 2: 	Pop();
            		break;
         
        case 3:         system("cls");
			Display_Stack();
            		break;
         
        case 4: 	system("cls");
			printf("Exiting...\n");
		        exit(0);
         		break;
         
         default:	system("cls"); 
            		printf("\nInvalid Choice!!\n\n");
      }
   }while(ch!=4);
	
}

void Push(int x)
{
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL){
		system("cls");
		printf("\nStack Overflow..!!\nCan not PUSH %d to the Stack!\n\n",x);
		return;
	}
	else{
	newNode->data = x;
	newNode->link = Top;
	Top = newNode;
	system("cls");
	printf("\n%d PUSHED to the Stack!!\n",newNode->data);
	Display_Stack();
	}
}

void Pop()
{
	if(Top == NULL){
		system("cls");
		printf("\nStack Underflow..!!\n\n");
		return;
	}
	else{
		system("cls");
		printf("\n%d POPPED from the Stack!!\n",Top->data);
		Top = Top->link;
		Display_Stack();
	}
}
