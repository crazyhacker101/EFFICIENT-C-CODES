//Best method to find maximum sum subarray!(Kadane's algorithm) O(n)..
#include<iostream>
using namespace std;

int main(){

	int a[100];
	int n;
	int cs =0; int ms =0;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"\n"<<"Enter array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n; i++){        //Kadane's Algorithm...

		cs = cs + a[i];
		if(cs < 0)
			cs = 0;

		else
			ms = max(cs, ms);  //Inbuilt Max function..
	}

	cout<<"Maximum sum of the subarray is:"<<ms;
	return 0;
}