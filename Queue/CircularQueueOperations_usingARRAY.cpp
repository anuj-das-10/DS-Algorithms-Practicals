//Program to implement all operations of Circular Queue using Array
#include<iostream>
using namespace std;

class CircularQueue
{
	int front, rear;
	int size;
	int *arr;
public: 	
	CircularQueue(int s)        //Constructor
	{
		front = rear = -1;
		size = s;
		arr = new int[s];
	}
	
	void  Display_Queue();      //To display elements in the Circular Queue
	void enQueue(int value);    //To insert element in the Circular Queue
	void deQueue();				//To delete element from the Circular Queue
};

void CircularQueue::enQueue(int value)
{
	if((front==0 && rear==size-1)  ||  (rear==(front-1)%(size-1)))
	{
		system("cls");
		cout<<"Queue Overflow..!!"<<endl<<endl;
		return;
	}
		else if(front== -1){
			front = rear = 0;
			arr[rear] = value;
		}
			else if(rear == size-1 && front!=0){
				rear=0;
				arr[rear] = value;
			}
		else{
			rear++;
			arr[rear] = value;
	}
	system("cls");
	cout<<endl<<arr[rear]<<" enQueued to the Queue!"<<endl;
	Display_Queue();
	cout<<"\n\n";
}

void CircularQueue::deQueue()
{
	if(front== -1){
		system("cls");
		cout<<"Queue Underflow..!!"<<endl<<endl;
		return;
	}	
	
	int data = arr[front];
	arr[front]= -1;
		if(front==rear){
			front = rear = -1;
	    }
	    else if(front == size-1){
	    	front = 0;
		}
		else
			front++;
	system("cls");		
	cout<<endl<<data<<" deQueued from the Queue!"<<endl;
	Display_Queue();
	cout<<"\n\n";
}

void CircularQueue::Display_Queue()
{
	if(front == -1)
	{
		cout<<"\nQueue is Empty!";
		return;
	}

	cout<<"Elements in the Circular Queue are: ";
	if(rear>=front)
	{
		for(int i=front; i<=rear; i++)
		{
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
	}
	else
	{
		for(int i=front; i<size; i++){
			cout<<arr[i]<<"  ";
		}
		
		for(int i=0; i<=rear; i++){
			cout<<arr[i]<<"  ";
		}
	}
}

int main()
{
	int size,choice,element;
	cout<<"Enter the size of the Circular Queue: ";
	cin>>size;
	CircularQueue cq(size);
	
	options:
	cout<<"<------ CIRCULAR QUEUE OPERATIONS ------>"<<endl;
    cout<<"1. Enqueue Elements to Queue"<<endl;
    cout<<"2. Dequeue Elements from Queue"<<endl;
    cout<<"3. Display Elements in Queue"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"<------------------------------------>"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 	cout<<"Insert Element to Queue: ";
					cin>>element;
					cq.enQueue(element);
					goto options;
					break;
			
		case 2:    	cq.deQueue();
					goto options;
					break;
			
		case 3:     cq.Display_Queue();
					goto options;
					break;
					
		case 4: 	cout<<"Exiting...";
					exit(0);
					break;
		
		default:    system("cls");
					cout<<"\nInvalid Choice...!!"<<endl<<endl;
					goto options;
				   
	}	
return 0;
}



















































































