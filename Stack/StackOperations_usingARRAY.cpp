//Program to implement all the operations of Stack using Array
#include <iostream>
#define MAX 5
using namespace std;
int stack[MAX] , Top= -1;

void Push(int x);
void Pop();

void Display_Stack()
{
	if(Top>=0){
		cout<<"Elements present in the Stack: ";
		for(int i=Top; i>=0; i--){
			cout<<stack[i]<<"  ";
		}	
		cout<<endl<<endl;
	}
	else{
		cout<<"Stack is Empty!!"<<endl<<endl;
	}
}


int main()
{
	int choice , x;
	do{
	cout<<"<------- STACK OPERATIONS ------->"<<endl;
	cout<<"1. PUSH Elements\n2. POP Elements\n3. Display Elements in Stack\n4. Exit"<<endl;
	cout<<"<-------------------------------->"<<endl;
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:		cout<<"Enter Element to PUSH: ";
					cin>>x;
					system("cls");
					Push(x);
					break;
		
		case 2:     system("cls");
					Pop();
					break;
					
	    case 3:		system("cls");
					cout<<endl;
					Display_Stack();
					break;
			
		case 4:		system("cls");
					cout<<"\nExiting..."<<endl;
					exit(0);
		
		default:	system("cls");
					cout<<"\nInvalid Choice!!"<<endl<<endl;
	}
	}while(choice!=4);
	return 0;
}

void Push(int x)
{
	if(Top>= MAX-1){
		cout<<"\nStack Overflow..!!"<<endl<<endl;
	}
	else{
		stack[++Top]=x;
		cout<<endl<<stack[Top] <<" PUSHED to the Stack!!"<<endl;
		Display_Stack();
	}
}

void Pop()
{
	if(Top<0){
		
		cout<<"\nStack Underflow..!!"<<endl<<endl;
	}
	else{
		cout<<endl<<stack[Top]<<" POPPED from the Stack!!"<<endl;
		Top--;
		Display_Stack();
	}
}
