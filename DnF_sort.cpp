#include<iostream>
using namespace std;

void dnf_sort(int *a, int n){

	int lo = 0;
	int mid = 0;
	int high = n-1;

	while( mid<= high){

		if(a[mid] == 0){
			swap(a[mid],a[lo]);
			mid++;
			lo++;
		}
		
		if(a[mid] == 1){
			mid++;
		}

		if(a[mid] == 2){
			swap(a[mid], a[high]);
			high--;
		}
	}
}

int main(){

	int a[] = {2, 1 ,1 ,1 , 0, 2 ,1,0,2,1,2,0,1,1,2};

	int n = sizeof(a)/sizeof(int);

	cout<<"Current array of 0s,1s and 2s:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	dnf_sort(a,n);

	cout<<"\n\nElements after DnF sorting is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}