//Check if the array is sorted using recursion..
#include<iostream>
using namespace std;

bool isSorted(int a[], int n){

	//Base case..
	if(n == 0 || n==1)
		return true;

	if( a[0] < a[1] and isSorted(a+1, n-1))
		return true;

	else
		return false;
}

int main(){

	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	if(isSorted(a,n))
		cout<<"Array is sorted";
	else
		cout<<"Array is unsorted";

	return 0;
}