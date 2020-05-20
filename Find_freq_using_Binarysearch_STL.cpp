//Find the frequency of searched element in sorted array using Binary search STL.
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int a[100];
	int n,key;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array elements (SORTED):";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the element you want the frequency of:";
	cin>>key;

	auto it = lower_bound(a, a+n, key);
	int lb = it - a;   //Finds the position of element which is >=key

	it = upper_bound(a, a+n, key);
	int ub = it - a;   //Finds the position of element which is >key

	if(ub - lb ==0)
		cout<<"Element not present"<<endl;

	else		
		cout<<"Frequency of occurences of element is:"<<ub - lb;

	return 0;
}