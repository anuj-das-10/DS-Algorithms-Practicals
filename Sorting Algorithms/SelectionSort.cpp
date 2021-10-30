//Program to implement Selection Sort Algorithm
#include<iostream>
using namespace std;
void Selection_Sort(int *arr, int n);
void Display_Array(int *arr, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<endl<<endl;
}

int main()
{
	int arr[]={12,34,54,6,78,3,43};	
	int n = sizeof(arr)/sizeof(int);
	cout<<"<------SELECTION SORT------>"<<endl<<endl;
	cout<<"Array Before Sorting: ";
	Display_Array(arr,n);
	Selection_Sort(arr,n);
	cout<<"Array After Sorting:  ";
	Display_Array(arr,n);
	
	return 0;
}


void Selection_Sort(int *arr, int n)
{
	int indexOfMin,temp;
	for(int i=0; i<n-1; i++)
	{
		indexOfMin=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j] < arr[indexOfMin])
			{
				indexOfMin=j;
			}
		}	
		
	//Swap with Minimum Element
	temp = arr[i];
	arr[i] = arr[indexOfMin];
	arr[indexOfMin] = temp;
	}
}














