//Program to implement insertion and deletion of an element in an Array.
#include<iostream>
#define MAXSIZE 100
using namespace std;


void Display_Array(int arr[], int size);
void Insert_Element(int arr[], int size, int index, int element);
void Delete_Element(int arr[], int size, int index);

int main()
{
	int arr[MAXSIZE],size;
	int index, element, choice;
	cout<<"Enter the Number of Element you want to Enter: ";
	cin>>size;
	cout<<"Enter "<<size<<" Elements: "<<endl;
	for(int i=0; i<size; i++){
	   cin>>arr[i];
	}
	system("cls");
	cout<<"GIVEN ARRAY: ";
	Display_Array(arr,size);
	do{
	cout<<"<------ ARRAY OPERATIONS ------>"<<endl;
	cout<<"1. Insert Element\n2. Delete Element\n3. Exit"<<endl;
	cout<<"<------------------------------>"<<endl;
	cout<<"\nEnter your Choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 	cout<<"Enter the Element to be Inserted: ";
					cin>>element;
					cout<<"Enter the Position of the Element to be Inserted: ";
   					cin>>index;
   					size++;
   					Insert_Element(arr,size,index,element);
   					system("cls");
   					cout<<"\nArray After Insertion of "<<element<<" at Position: "<<index<<endl;
   					Display_Array(arr,size);
					break;
	
		case 2: 	cout<<"Enter the Position of the Element to be Deleted: ";
   					cin>>index;
   					Delete_Element(arr,size,index);
   					size--;
   					system("cls");
   					cout<<"\nArray After Deletion of Element at Position: "<<index<<endl;
   					Display_Array(arr,size);
					break;
   		
   		case 3:         cout<<"Exiting.....";
		   			exit(0);
		   			
	       default: 	system("cls");
					cout<<"Invalid Choice!!\nChoose Again!!"<<endl; 
					cout<<"\nGiven Array: ";
	    			        Display_Array(arr,size);
				 	
   }
}while(choice!=3);
   	return 0;		
}

void Insert_Element(int arr[], int size, int index, int element)
{
	for(int i=size-1; i>=index-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index-1]=element;
}


void Delete_Element(int arr[], int size, int index)
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

