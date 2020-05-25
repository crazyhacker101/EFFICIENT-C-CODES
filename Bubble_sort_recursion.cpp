#include<iostream>
using namespace std;


void full_bubble_rec(int *a, int j, int n){

	if(n == 1)
		return;

	if( j == n-1){
		//single pass of the array has been done
		return full_bubble_rec(a , 0, n-1);
	}

	if(a[j] > a[j+1])
		swap(a[j], a[j+1]);

	full_bubble_rec(a, j+1, n);    //Do not reduce n here as pass is not complete..
}


void bubble_sort(int *a, int n){

	if(n == 1)     //If only one element remains it is sorted
		return;

	//Recursive case
	for(int j=0; j<n-1; j++){    //Comparing till second last element and swapping when necessary
		if(a[j] > a[j+1])
			swap(a[j], a[j+1]);
	}

	bubble_sort(a, n-1);
}

int main(){
	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	full_bubble_rec(a, 0, n);

	cout<<"Final array is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";


	return 0;

}