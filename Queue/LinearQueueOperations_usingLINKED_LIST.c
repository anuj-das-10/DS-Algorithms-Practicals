//Program to implement all operations of Linear Queue using Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;       //Global Variables

void enQueue(int val);
void deQueue();

void Display_Queue()
{
    struct Node *temp = front;

    while(temp)
    {
        printf("%d   ",temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

int main()
{
	int choice,x;
	do{
	printf("<------ LINEAR QUEUE OPERATIONS ------>\n");
	printf("1. enQueue Elements\n2. deQueue Elements\n3. Display Elements\n4. Exit\n");
	printf("<------------------------------------->\n");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: printf("Enter the Element to Insert: ");
				scanf("%d",&x);
				enQueue(x);
				break;
		case 2: deQueue();
				break;
		case 3: system("cls");
				printf("\nElements present in the Queue: \n");
				Display_Queue();
				break;
		case 4: system("cls");
				printf("\nExiting.....\n\n");
				exit(0);
				break;
	       default: system("cls");
				printf("\nInvalid Choice!!\n\n");
		
		}
	}while(choice!=4);
}

void enQueue(int val)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if(!newNode){
    	system("cls");
    	printf("\nOVERFLOW!!\nUnable to enQueue Element as Memory!\n\n");
	}
    
    newNode->data = val;
    newNode->next = NULL;

    //if it is the first Node
    if(front == NULL && rear == NULL)
        //make both front and rear points to the new Node
        front = rear = newNode;
    else
    {
        //add newnode in rear->next
        rear->next = newNode;

        //make the new Node as the rear Node
        rear = newNode;
    }
    system("cls");
    printf("\n%d enQueued to the Queue!\n\n",newNode->data);
    printf("Elements in the Queue: \n");
    Display_Queue();
}



void deQueue()
{
//Used to free the first Node after dequeue
    struct Node *temp;

    if(front == NULL){
	system("cls");
	printf("\nUNDERFLOW!!\nUnable to deQueue Element as List is Empty!\n\n");
	}
	else{
        temp = front;
//Make the front Node points to the next Node , Logically removing the front element

		front = front->next;

    	//If front == NULL, Set rear = NULL
    		if(front == NULL){
				rear = NULL;
			}
			system("cls");
		printf("\n%d deQueued from the Queue!\n\n",temp->data);
        free(temp);
        printf("Elements in the Queue: \n");
        Display_Queue();
    }

}

