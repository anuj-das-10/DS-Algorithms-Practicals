//Program to implement all the operations of Stack using Array
#include <iostream>
#define MAX 5
using namespace std;

class Stack 
{
	int top;

	public:
		int a[MAX]; 
		Stack() 
		{ 
			top = -1; 
		}
	
	bool PUSH(int x);
	int POP();
	int peek();
	bool isEmpty();
};

bool Stack::PUSH(int x)
{
	if (top >= (MAX - 1)) {
		cout << "STACK OVERFLOW..!!";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " PUSHED into the Stack!!\n";
		return true;
	}
}

int Stack::POP()
{
	if (top < 0) {
		cout << "STACK UNDERFLOW..!!";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty!";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}


int main()
{
	class Stack stack;
	stack.PUSH(10);
	stack.PUSH(20);
	stack.PUSH(30);
	stack.PUSH(56);
	cout << endl << stack.POP() << " POPPED from the Stack!!\n";

	//Print all elements in stack :
	cout<<"Elements Present in the Stack : ";
	while(!stack.isEmpty())
	{
		// Print top element in stack
		cout<<stack.peek()<<" ";
		// Remove top element in stack
		stack.POP();
	}

	return 0;
}

