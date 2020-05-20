#include<iostream>
#include<climits>      // This header file is include to support INT_MAX and INT_MIN function.

using namespace std;

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int largest = INT_MIN;          // INT_MIN provides the minimum value of int
	int smallest = INT_MAX;

	for(int i=0; i<n; i++){

		if(a[i] > largest)
			largest = a[i];


		else if(a[i] < smallest)
			smallest = a[i];
	}

	cout<<"LARGEST NO >>>"<<largest<<endl<<"SMALLEST NO >>>"<<smallest;
	return 0;
}