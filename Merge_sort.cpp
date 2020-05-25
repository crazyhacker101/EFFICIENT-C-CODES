#include<iostream>
using namespace std;

void merge(int *a, int s, int e){

	int mid = (s + e)/2;
	int i = s;
	int j = mid + 1;
	int k = s;        //For the final array

	int temp[100];

	while( i<=mid and j<=e){

		if(a[i] < a[j])
			temp[k++] = a[i++];

		else
			temp[k++] = a[j++];
	}

	while( i <= mid)            //If j gets over first then copy i
		temp[k++] = a[i++];

	while( j<= e)
		temp[k++] = a[j++];

	//Copy all elements to original array

	for(int i =s; i<= e; i++)
		a[i] = temp[i];

}
void mergeSort(int *a, int s, int e){

	if( s >= e)
		return;

	//Follow 3 steps.
	//1.Divide

	int mid = (s + e)/2;

	//2.recursively call merge sort to 2 parts
	mergeSort(a, s, mid);
	mergeSort(a, mid+1, e);

	//3.Merge
	merge(a, s, e);
}

int main(){

	int a[100];
	int n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	mergeSort(a, 0, n-1);

	cout<<"Final array is:";
	for(int i=0 ; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}