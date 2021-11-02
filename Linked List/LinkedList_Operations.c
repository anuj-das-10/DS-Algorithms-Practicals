//Program to implement all operations Single Linked List 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
}*head=NULL;

int length;  //Global Variable 

void Create_Append( void );
void Insert_at_Given_Position( void );
void Delete_Node( void );
int Length( void );
void Display( void );



int main()
{
    int ch;
    do{    
        printf("<------ SINGLE LINKED LIST OPERATIONS ------>\n");
        printf("1. Create & Append Nodes\n2. Insert Node at Given Position\n3. Delete Node\n4. Length of Node\n5. Display Linked List \n6. Exit\n");
        printf("<------------------------------------------->\n");
		printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
    switch (ch)
    {
    case 1: 	Create_Append();
            	break;
    case 2: 	Insert_at_Given_Position();
            	break;
    case 3: 	Delete_Node();
            	break;
    case 4: 	length= Length();
		system("cls");
		printf("\nNumber of Nodes Present in the Linked List, i.e., Length: %d\n\n",length);
            	break;
    case 5: 	system("cls");
    		printf("\nElements present in the Linked List: \n");
		Display();
            	break;
    case 6: 	system("cls");
    		printf("Exiting.....\n");
		exit(0);
    default: 	system("cls");
		printf("\nInvalid Choice!!\n\n");
    }    
    }while(ch!=6);
    
}

//Defining Function Create_Append(), that will Create Node and (Append)Insert that Node at the End of the Linked List
void Create_Append()
 {
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    if(!temp){
    	printf("\nOVERFLOW!!\nMemory is Full, Can't Create New Node!\n\n");
    	return;
	}
    printf("Enter Node Data: ");
    scanf("%d",&temp->data);
    temp->link=NULL;

//	Condition for Creating Nodes
    if(head==NULL)  //List is Empty
    {
        head=temp;
        system("cls");
        printf("\nNode Created with value: %d\n\n",head->data);
        Display();
    }
//	Condition for Insertion of Node at the End
	else{
        struct Node *ptr;
        ptr=head;

        while (ptr->link!= NULL)
        {
           ptr=ptr->link;
        }
        ptr->link=temp;
        system("cls");
        printf("\nNode Appended with value: %d\n\n",temp->data);
        Display();
    }
} 

//Defining Function Prototype Length(), that will Calculate the number of Node present in the Linked List
int Length()
{
    int count=0;
    struct Node *temp;
    temp=head;

    while(temp!=NULL)
    {
      count++;
      temp= temp->link;
    }
    return count;
}

//Defining Function Prototype Display(), that will Display the elements in the Linked List by Traversing each Node
void Display()
{
    struct Node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("\nList is Empty, No Nodes to display.");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%d ---> ",temp->data);
            temp=temp->link;
        }
        printf("NULL\n\n");
    }
}

//Defining Function Prototype Delete_Node(), that will Delete Node from the given Position in the Linked List
void Delete_Node()
{	
    struct Node *temp;
    int index;
    
    if(head==NULL){
	system("cls");
	printf("\nUNDERFLOW!!\nCan't Delete Node as the List is Empty!\n\n");
	return;
	}
   
    printf("Enter the Position to Delete Node: ");
    scanf("%d",&index);


   if(index-1>Length())
    {
        printf("Invalid Position..!!\n\n");
    }
    else if(index-1==0)
    {
        temp=head;
        head= temp->link;
        temp->link=NULL;
        free(temp);
        system("cls");
        printf("\nNode %d Deleted!\n\n",index);
    }
    else{
    int i;
    struct Node *ptr1 = head;
    struct Node *ptr2 = head->link;
    for (i = 1; i < index-1; i++)
    {
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }
    
    ptr1->link = ptr2->link;
    free(ptr2);
	system("cls");
    printf("\nNode %d Deleted!\n\n",index);
            
        }
        Display();
    }


 //Defining Function Prototype Insert_at_Given_Position(), that will Add Node at the given position of the Linked List 
 //Supports --> Insertion at Beginning, Given Position and End
 void Insert_at_Given_Position()
 {
     struct Node *temp;
     int loc;
    printf("Enter Position to Inserted: ");
    scanf("%d",&loc);
//	Condtition for Bound Exception, i.e., position of new node to be inserted must not exceed the Length of the Linked List
	if(loc-1>Length())
    {
    	system("cls");
        printf("\nInvalid Position!!\n");
        printf("Currently Linked List is having %d Nodes. \n\n", Length());
    }
//	Condition for Insertion of Node at the Beginning 
    else if(loc==1){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    printf("Enter the Data of the Node: ");
    scanf("%d",&ptr->data);
    ptr->link = head;
    head=ptr;
    system("cls");
    printf("\nNew Node with Value: %d is Inserted at Position: %d\n\n",ptr->data,loc);
    Display();
	}
//	Condition for Insertion of Node in the given Location	
    else{
    	int i=2;
        struct Node *ptr=head;
        while(i<=loc-1)
        {
            ptr= ptr->link;
            i++;
        }
        temp=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the Data of the Node: ");
        scanf("%d",&temp->data);
        temp->link=NULL;
        temp->link=ptr->link;  //Right connection is done
        ptr->link=temp;  		//Left connection is done
        system("cls");
        printf("\nNew Node with Value: %d is Inserted at Position: %d\n\n",temp->data,loc);
        Display();
    }
 }

 
