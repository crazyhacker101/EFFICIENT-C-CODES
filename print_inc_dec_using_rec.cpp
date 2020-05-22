//Write 2 functions to print first n numbers in increasing and decreasing order..
#include<iostream>
using namespace std;

void dec(int n){

	//base case
	if(n == 0)
		return;

	//Recursive case...
	cout<<n<<" ";
	dec(n-1);
}

void inc(int n){

	//base case.
	if(n == 0)
		return;

	//recurscive case..
	inc(n-1);
	cout<<n<<" ";
}

int main(){

	int n;

	cout<<"enter the number to print first n numbers in inc n' dec order:";
	cin>>n;

	cout<<"Numbers in increasing order are:";
	inc(n);
	cout<<"\nNumbers in decreasing order are:";
	dec(n);

	return 0;
}