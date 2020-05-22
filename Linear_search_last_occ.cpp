//find the last occurence of searched number..
#include<iostream>
using namespace std;

int lastocc(int a[], int n, int key){

	if(n == 0)    //zero elements in array
		return -1;

	int i = lastocc(a+1, n-1, key);  //First check on later array.

	if(i == -1){    //If element is not found in later array then check for current array

		if(a[0] == key)
			return 0;

		else
			return -1;  //Element not found in laster array and the current element
	}

	//Otherwise element is found in later element(i returned by later array is not -1)
	return i+1;
	
}
int main(){

	int a[100],n;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int key;

	cout<<"Enter the key you want to find out:";
	cin>>key;

	int result = lastocc(a, n, key);
	if(result == -1)
		cout<<"Element not found";
	else
		cout<<"Element found at:"<<result;

	return 0;
}