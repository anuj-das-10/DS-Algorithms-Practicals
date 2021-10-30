//Program to implement Binary Search Algorithm
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int x, int size);

void Display(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
	  cout<<arr[i]<<"   ";
	}
cout<<endl;
}

int main()
{
	int arr[]={4,6,8,10,12,14,16,18,20,22,24,26,28,30};
	int x, pos, size=sizeof(arr)/sizeof(int);
	cout<<"<---BINARY SEARCH--->\n"<<endl;
	cout<<"Given Array: ";
	Display(arr,size);
	cout<<"\n\nEnter the Element to be Searched: ";
	cin>>x;
	if(BinarySearch(arr,x,size)==0)
	{
		cout<<x<<" not found in this Array...!!"<<endl<<endl;
	}
	else
	{
		pos = BinarySearch(arr,x,size);
		cout<<x<<" found at position: "<<pos<<endl<<endl;
	}
	
	return 0;
}

int BinarySearch(int arr[], int x, int size)
{
	int beg=0, mid, end=(size-1),location;
	mid = (int)((beg+end)/2);
	while(beg<=end && arr[mid]!=x)
	{
		if(x<arr[mid])
			 end = mid-1;
		else
		 	 beg = mid+1;	
		
			mid = (int)((beg+end)/2);
	}

	if(arr[mid]==x)
	{
		location = mid;
		return location+1;
	}
	else
		return 0;
}


