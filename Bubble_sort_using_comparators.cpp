#include<iostream>
using namespace std;

bool compare(int a, int b){
	cout<<"Comparing "<<a<<"and "<<b<<endl; //To check how many times comparison is done.
	return a>b;
}

void bubble_sort(int a[], int n, bool (&compare)(int a, int b) ){   //Synatax for passing another function as parameter

	for(int i = 1; i<= n-1; i++){

		for(int j=0; j<= n-i-1; j++){

			if(compare(a[j],a[j+1])){

				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	bubble_sort(a, n, compare);

	cout<<"Final array is:";
	for(int i=0 ; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}