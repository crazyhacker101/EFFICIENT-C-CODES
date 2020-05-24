#include<iostream>
using namespace std;

int fastpower(int a, int n){

	if(n == 0)
		return 1;

	//Recursive case
	int half = fastpower(a,n/2);
	half *= half;

	if(n % 2 != 0)
		return half * a;

	return half;
}
int main(){

	int a,n;
	cout<<"Enter the value of the base:";
	cin>>a;

	cout<<"Enter the exponent:";
	cin>>n;

	cout<<" (a^n) using recursion is:"<<fastpower(a,n);
	return 0;
}