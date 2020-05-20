#include<iostream>
#include<algorithm>  // If using stl remember to include this header file.
using namespace std;

int main(){

	int a[100],n,key;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the element to searched:";
	cin>>key;

	auto it = find(a, a+n, key);     //iterator(it) will store the address of the element found.

	int index = it - a ;     // index = Let's say it = arr+2 >>> index = arr+2 - arr = 2 i.e index

	//if element is not found then whole array will be traversed and finally it = arr + n

	if(index == n)
		cout<<"Element not found";

	else
		cout<<"Found at:"<<index;

	return 0;
}