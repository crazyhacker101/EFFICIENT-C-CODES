//Better Method to find maximum sum subarray...O(n^2)..
#include<iostream>
using namespace std;

int main(){

	int a[100],csum[100];
	int n,lb,ub;
	int cur_sum, max_sum=0;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"\n"<<"Enter array elements:";
	
	cin>>a[0];
	csum[0] = a[0];

	for(int i=1; i<n; i++){
		cin>>a[i];
		csum[i] = csum[i-1] + a[i]; //Creating a sum array to store the sums of all array elements.
	}

	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			cur_sum = 0;

			cur_sum = csum[j] - csum[i-1];   //Computing the csum array to find the maximum sum...

			if(cur_sum > max_sum){
				max_sum = cur_sum;
				lb = i;
				ub = j;
			}
		}
	}

	cout<<"Maximum sum is:"<<max_sum<<endl;
	cout<<"Maximum sum subarray is:";
	for(int i = lb ; i<=ub; i++)
		cout<<a[i]<<" ";

	return 0;

}