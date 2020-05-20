#include<iostream>
using namespace std;

void bubble_sort(int a[], int n){

	for(int i=1; i<= n-1; i++){         //Total number of iterations in bubble sort.

		for(int j = 0; j<= n-i-1; j++){   //Number of traversals in the array.

			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}  
	}

}

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	bubble_sort(a, n);

	cout<<"Final array is:";
	for(int i=0 ; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}