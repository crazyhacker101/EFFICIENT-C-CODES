#include<iostream>
using namespace std;

void counting_sort(int *a, int n){

	//Assuming no>0
	int largest = -1;

	for(int i=0 ; i<n; i++){

		largest = max(largest,a[i]);
	}

	int *freq = new int[largest + 1]{0};

	for(int i=0; i<n; i++)
		freq[a[i]]++;

	//putting elements back in the real array..
	int j=0;
	for(int i=0; i<=largest; i++){

		while(freq[i] > 0){

			a[j] = i;
			freq[i]--;
			j++;
		}
	} 
}

int main(){

	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	counting_sort(a, n);

	cout<<"Array after counting sort is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}