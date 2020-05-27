#include<iostream>
using namespace std;

void wave_sort(int *a, int n){

	for(int i=0; i<n; i+= 2){

		if(i!=0 and a[i]<a[i-1])
			swap(a[i],a[i-1]);

		if(i!=(n-1) and a[i]<a[i+1])
			swap(a[i],a[i+1]);
	}
}

int main(){

	int a[] = {1,3,4,2,7,8};
	int n = sizeof(a)/sizeof(int);

	cout<<"Array before sorting:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	wave_sort(a,n);

	cout<<"\n\nArray after wave sort:";

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}