//Program to implement all operations of Linear Queue using Array
#include <iostream>
#define n 10
using namespace std;
int queue[n], front = -1, rear = -1;

void Display_Queue() 
{
   if (front == -1)
   cout<<"Queue is empty !"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
        cout<<endl<<endl;
   }
}

void Enqueue() 
{
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow..!!"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the Element in Queue: ";
      cin>>val;
      rear++;
      queue[rear] = val;
      system("cls");
      cout<<queue[rear] <<" Enqueued to the Queue !!"<<endl;
      Display_Queue();
   }
}

void Dequeue() 
{
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow..!!";
      return ;
   } else {
   	  system("cls");
      cout<< queue[front] <<" Dequeued from the Queue !!"<<endl;
      front++;
      Display_Queue();
   }
}


int main() {
   int ch;
  
   do {
   	cout<<"<------ LINEAR QUEUE OPERATIONS ------>"<<endl;
    cout<<"1. Enqueue Elements to Queue"<<endl;
    cout<<"2. Dequeue Elements from Queue"<<endl;
    cout<<"3. Display Elements in Queue"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"<------------------------------------>"<<endl;
   
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: Enqueue();
        		 break;
         case 2: Dequeue();
        		 break;
         case 3: system("cls");
		 		 Display_Queue();
        		 break;
         case 4: cout<<"Exiting..."<<endl;
        		 break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}

