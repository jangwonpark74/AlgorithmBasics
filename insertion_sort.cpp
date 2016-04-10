#include <iostream>
using namespace std;


void exch(int arr[], int l, int r)
{
	int t=arr[l]; arr[l]=arr[r]; arr[r]=t;
}

/*
 * Insertion Sort Algorithm
 */

void sort(int arr[], int len)
{
	for(int i=1; i<len; i++)
	{
		for(int j=i; j>0 && arr[j]<arr[j-1]; j--)
		{
			exch(arr, j, j-1);
		}
	}
}

int main()
{
	int A[] = { 1, 5, 7, 9, 10, 20, 30, 55};

	int len = sizeof(A)/sizeof(A[0]);
	
	cout << "Before sort" <<endl;
	for(int i=0; i< len; i++)
	   cout << A[i] << " ";
	cout <<endl;
	
	sort(A, len);

	cout << "After insertion sort" <<endl;
	for(int i=0; i< len; i++)
	   cout << A[i] << " ";
	cout <<endl;
	return 0;	
}


