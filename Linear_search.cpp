#include<iostream>
using namespace std;

int main(){

	int a[1000];                 // For C all the declarations of variables should take place here.
	int n,key,i;				 // For C++ declaration can take place anywhere.

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the value to searched in the array:";
	cin>>key;

	//traversing the array and look for the key

	for(i=0; i<n; i++){

		if(a[i] == key){
			cout<<"Element found at index:"<<i;
			break;            // So, if element is found loop will terminate and value of i will not reach n                   
		}
	}

	//If element is not found then the loop will not break and at the end value of i finally becomes n

	if(i==n)
		cout<<"Element not found.";

	return 0;
}