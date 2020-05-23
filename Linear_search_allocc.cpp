//Find all the occurences of the given key in the array using recursion.
#include<iostream>
using namespace std;

void allOcc(int *a, int i, int n, int key,int flag){

	if(i == n){
		
		if(flag!=0)
			return;
		else{
			cout<<"Element not found";
			return;
		}
	}

	if(a[i] == key){
		cout<<i<<" ";
		flag++;
	}

	allOcc(a, i+1, n, key,flag);
}

int main(){

	int a[100],n,key;

	cout<<"Enter the size:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the key";
	cin>>key;

	allOcc(a, 0, n, key,0);
	return 0;
}