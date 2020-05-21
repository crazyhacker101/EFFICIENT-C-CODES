//Primitive method to find maximum sum subarray...O(n^3)..
#include<iostream>
using namespace std;

int main(){

	int a[100];
	int n,lb,ub;
	int cur_sum, max_sum=0;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"\n"<<"Enter array elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			cur_sum = 0;
			for(int k = i; k<=j; k++){

				cur_sum += a[k];
			}

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