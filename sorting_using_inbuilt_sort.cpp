#include<iostream>
#include<algorithm>  // Header file for using STL functions...
using namespace std;

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	//STL for sort...

	sort(a, a+n);     //takes parameters as initial starting point and final point of arra, vector..

	//Faster than normal sort functions..

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;

}