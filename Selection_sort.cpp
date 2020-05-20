#include<iostream>
using namespace std;                    //SELECTION SORT

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int i = 0; // Index for the sorted part
	int j;     // Index for traversing the unsorted part of array

	for(i = 0; i<n-1; i++){            // i runs till n-1 times because for last element we do not need to check.

		int min_index = i;             // to store the current i position in order to do the swapping

		for(j = i; j<n; j++){

			//Find the minimum element and store the index of that element
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}

		//swap(a[i],a[min_index]);       // This is the STL that C++ provides to swap

		int temp;
		temp = a[i];
		a[i] = a[min_index];
		a[min_index] = temp;
	}

	cout<<"Final array is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}