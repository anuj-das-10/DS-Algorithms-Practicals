//Program to implement Insertion Sort Algorithm
#include<iostream>
using namespace std;
void Insertion_Sort(int *arr,int n);
void Display_Array(int *arr,int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<endl<<endl;
}

int main()
{
	int arr[]={98,90,76,65,54,43,32,45,77,21,34,11,5,8,3};
	int n = sizeof(arr)/sizeof(int);
	cout<<"<------INSERTION SORT------>"<<endl<<endl;
	cout<<"Array Before Sorting: ";
	Display_Array(arr,n);
	Insertion_Sort(arr,n);
	cout<<"Array After Sorting:  ";
	Display_Array(arr,n);
	return 0;
}

void Insertion_Sort(int *arr,int n)
{
	int key,j;
	for(int i=1; i<=n-1; i++)
	{
		key = arr[i];
		j = i-1;
	
	
//For Ascending Order---> A[j]>key   &&  For Descending Order---> A[j]<key 	
		
		while(j>=0 && arr[j] > key)        //Loop for each pass
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
