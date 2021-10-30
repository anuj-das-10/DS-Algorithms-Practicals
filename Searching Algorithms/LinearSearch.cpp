//Program to implement Linear Search Algorithm
#include<iostream>
using namespace std;
int LinearSearch(int arr[], int x, int size);

void Display(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
	  cout<<arr[i]<<"    ";
	}
cout<<endl;
}

int main()
{
int arr[]={23,3,12,45,7,8,67,32,40,30,20,53,31,41,76};
int x, pos, size=sizeof(arr)/sizeof(int);
cout<<"<---LINEAR SEARCH--->\n"<<endl;
cout<<"Given Array: ";
Display(arr,size);
cout<<"\n\nEnter the Element to be Searched: ";
cin>>x;

if(LinearSearch(arr,x,size))
{
	pos=LinearSearch(arr,x,size);
	cout<<x<<" found at position: "<<pos<<endl<<endl;
}
else
{
	cout<<x<<" not found in this array...!!"<<endl<<endl;
}

return 0;
}


int LinearSearch(int arr[], int x, int size)
	{
   		for(int i=0; i<size; i++)
	{
		if(x==arr[i])
		{
			return (i+1);
		}
	}
return 0;
}
