#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int a[100];
	int n,key;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the elment to be searched for:";
	cin>>key;

	bool present = binary_search(a, a+n, key);  //This STL returns true or false if element is present or not.
	if(present)
		cout<<"Element present";
	else
		cout<<"Absent";

	return 0;
}