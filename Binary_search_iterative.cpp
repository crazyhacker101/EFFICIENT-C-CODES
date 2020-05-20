#include<iostream>
using namespace std;

int main(){

	int a[100];
	int n, mid, key;

	cout<<"Enter the size of the array:";
	cin>>n;
																	//Binary Search only works for sorted arrays.
	cout<<"Enter the elements of the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the key to be searched:";
	cin>>key;

	int start = 0;
	int end = n-1;

	while(start <= end){

		mid = (start + end)/2;          // mid is storing the index of the middle element of array.

		if(a[mid] == key){
			cout<<"Element found at index:"<<mid;
			return 0;                               //Program terminates here.
		}

		else if(a[mid] > key)           // Means key is to the left side. That means update end.
			end = mid -1;

		else if(a[mid] < key)           // Means key is to the right side. That means update start.
			start = mid + 1;
	}

	cout<<"Element not found";          // Program will reach here only key is not found.
	return 0;
}