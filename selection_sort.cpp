#include <iostream>
using namespace std;


void exch(int arr[], int l, int r)
{
	int t=arr[l]; arr[l]=arr[r]; arr[r]=t;
}

/*
 * Selection Sort Algorithm
 */

void sort(int arr[], int len)
{
	for(int i=0; i<len; i++)
	{
		int min= i;
		for(int j=i+1; j < len; j++)
		{
			if(arr[j] <arr[min]) min = j;
		}
		exch(arr, i, min);
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


