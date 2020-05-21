#include<iostream>
using namespace std;

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"\n"<<"Enter array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"\nGenerating subarrays:"<<endl;
	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			for(int k = i; k<=j; k++)
				cout<<a[k]<<" ";        //Printing the values of the array..
		
			cout<<endl;
		}

	cout<<endl;
	}

	return 0;

}