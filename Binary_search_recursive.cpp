#include<iostream>
using namespace std;

int bsearch(int a[], int s, int e,int key){

	if(s <= e){

	int mid = (s + e)/2;
	
	//Base case.
	
	if(key == a[mid])
		return mid;

	//Recursive case..

	else if(key < a[mid])
		return bsearch(a, s, mid-1, key);

	else if(key > a[mid])
		return bsearch(a, mid+1, e, key);
	
	}
	return -1;
}

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int key;
	int s = 0;
	int e = n-1;

	cout<<"Enter the value to be searched for:";
	cin>>key;

	int result = bsearch(a, s, e, key);
	if(result == -1)
		cout<<"Element not found";
	else
		cout<<"Element found at index: "<<result;

	return 0;
}