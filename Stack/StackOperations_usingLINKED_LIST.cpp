//Program to implement all operations of Stack using Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;
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
		cout<<"\nStack is Empty..!! ";
	}
	else{
		ptr = Top;
		cout<<"Elements present in the Stack: ";
		while(ptr != NULL){
			cout<<ptr->data<<"  ";
			ptr = ptr->link;
		}
	}
	cout<<endl<<endl;
}


int main()
{
	 int ch, val;

    do {
    cout<<"<------- STACK OPERATIONS ------->"<<endl;
    cout<<"1. PUSH Elements"<<endl;
    cout<<"2. POP Elements"<<endl;
    cout<<"3. Display Elements in Stack"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"<-------------------------------->\n"<<endl;
      cout<<"Enter your choice: ";
      cin>>ch;
      switch(ch) {
        case 1: 	cout<<"Enter Element to be Pushed:"<<endl;
            		cin>>val;
            		Push(val);
            		break;
         
		case 2: 	Pop();
            		break;
         
        case 3:     system("cls");
					Display_Stack();
            		break;
         
        case 4: 	system("cls");
					cout<<"Exiting..."<<endl;
         		    break;
         
         default:	system("cls"); 
            		cout<<"\nInvalid Choice!!"<<endl<<endl;
      }
   }while(ch!=4);
	
	return 0;
}

void Push(int x)
{
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL){
		system("cls");
		cout<<"\nStack Overflow..!!\nCan not PUSH "<<x<<" to the Stack!"<<endl<<endl;
	}
	else{
	newNode->data = x;
	newNode->link = Top;
	Top = newNode;
	system("cls");
	cout<<endl<<newNode->data<<" PUSHED to the Stack!!"<<endl;
	Display_Stack();
	}
}

void Pop()
{
	if(Top == NULL){
		system("cls");
		cout<<"\nStack Underflow..!!"<<endl<<endl;
		return;
	}
	else{
		system("cls");
		cout<<endl<<Top->data<<" POPPED from the Stack!!"<<endl;
		Top = Top->link;
		Display_Stack();
	}
}
