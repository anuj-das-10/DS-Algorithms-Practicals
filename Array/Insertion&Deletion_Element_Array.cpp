//Program to implement insertion and deletion of an element in an Array.
#include<iostream>
using namespace std;

void Display_Array(int arr[], int size);
int Insert_Element(int arr[], int size, int index, int element);
int Delete_Element(int arr[], int size, int index);

int main()
{
	int arr[]={23,3,4,56,67,21,34,66,33};
	int size = sizeof(arr)/sizeof(int);
	int index, element, choice;
	cout<<"Given Array: ";
	Display_Array(arr,size);
	menu:
	cout<<"1. Insert Element\n2. Delete Element\n3. Exit"<<endl;
	cout<<"Enter your Choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 	cout<<"Enter the Element to be Inserted: ";
					cin>>element;
					cout<<"Enter the Position of the Element to be Inserted: ";
   					cin>>index;
   					Insert_Element(arr,size,index,element);
   					Display_Array(arr,size);
					break;
	
		case 2: 	cout<<"Enter the Position of the Element to be Deleted: ";
   					cin>>index;
   					Delete_Element(arr,size,index);
   					Display_Array(arr,size);
					break;
   		
   		case 3:     cout<<"Exiting.....";
		   			exit(0);
		   			
	    default: 	system("cls");
					cout<<"Invalid Choice!!\nChoose Again!!"<<endl; 
					cout<<"\nGiven Array: ";
	    			Display_Array(arr,size);
				 	goto menu;
   }
   
   	return 0;		
}

int Insert_Element(int arr[], int size, int index, int element)
{
	for(int i=size-1; i>=index-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index-1]=element;
}


int Delete_Element(int arr[], int size, int index)
{
	for(int i=index-1; i<size-1; i++ )
	{
		arr[i]=arr[i+1];
	}
}


void Display_Array(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<endl<<endl;
}


















