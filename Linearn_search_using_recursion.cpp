#include<iostream>
using namespace std;

int firstocc(int a[], int n, int key){

	if(n == 0)
		return -1;

	if(a[0] == key)
		return 0;

	int i = firstocc(a+1, n-1, key);
	if(i == -1)
		return -1;

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

	int result = firstocc(a, n, key);
	if(result == -1)
		cout<<"Element not found";
	else
		cout<<"Element found at:"<<result;

	return 0;
}