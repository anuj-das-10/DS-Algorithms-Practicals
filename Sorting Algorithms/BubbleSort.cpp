//Program to implement Bubble Sort Algorithm

#include<iostream>
using namespace std;
void Bubble_Sort(int *arr, int n);
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
	int arr[]={12,33,65,73,32,21,11,5,3};
	int n=sizeof(arr)/sizeof(int);
	cout<<"<------BUBBLE SORT------>"<<endl<<endl;
	cout<<"Array Before Sorting: ";
	Display_Array(arr,n);
	Bubble_Sort(arr,n);
	cout<<"Array After Sorting:  ";
	Display_Array(arr,n);
	return 0;
}

void Bubble_Sort(int *arr,int n)
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
