#include<iostream>
#include<algorithm>  // Header file for using STL functions...
using namespace std;

//This is a comparator function used for comparing two integer..

bool compare(int a, int b){       //this will tell the sort function how to compare to intergers.

	return a > b;   //Sorting in descending order. Here, it returns true if a > b, hence sorted in descending order.
}

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	//STL for sort...

	sort(a, a+n, compare);     //Passing compare function as a parameter to another function...

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;

}