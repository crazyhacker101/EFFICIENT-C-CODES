#include<iostream>
using namespace std;

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int MAX = a[0];
	int MIN = a[0];

	for(int i=0; i<n; i++){
		
		if(a[i] >MAX)
			MAX = a[i];
		else if(a[i] < MIN)
			MIN = a[i];
	}

	cout<<"MAX VALUE:"<< MAX<<endl<< "MIN VALUE:"<< MIN;
	return 0;
}