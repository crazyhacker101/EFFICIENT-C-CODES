#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){

	for(int i=1; i<= n-1; i++){

		int curr = a[i];    //This storage is important to preserve the identity of unsorted element to be compared.
		
		int j = i-1;			//Accounts for the previous index..

		while(j>=0 && a[j] > curr){

			a[j+1] = a[j];   // Shifting the values of the sorted array by pasting them to the next location..
			j--;
		}
		a[j+1] = curr;      //Pasting the value from the unsorted array to sorted array.
	}
	
}

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	insertion_sort(a, n);

	cout<<"Sorted array elements are:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}