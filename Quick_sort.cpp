#include<iostream>
using namespace std;

int partition(int *a, int s, int e){

	int i = s - 1;
	int j = s;

	int pivot = a[e];  //Pivot element

	for( ; j<= e-1; ){

		if( a[j] <= pivot){

			i = i + 1;        //Expand the smaller region...
			swap(a[i], a[j]);
		}

		j = j + 1;  //Expand the larger region...
	}

	swap(a[i+1],a[e]);

	return i+1;  //Position of pivot element

}

void quicksort(int *a, int s, int e){

	if( s>= e)
		return;

	int p = partition(a, s, e);

	quicksort(a, s , p-1);
	quicksort(a, p+1, e);

}

int main(){

	int a[100],n;
	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	quicksort(a, 0, n-1);

	cout<<"Array after quicksort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}