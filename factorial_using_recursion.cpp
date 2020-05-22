#include<iostream>
using namespace std;

int fact(int n){

	//Base case
	if(n == 0)
		return 1;

	//Recursive case.
	return n*fact(n-1);
}

int main(){

	int n;
	cout<<"Enter the number u want to find factorial of:";
	cin>>n;

	cout<<"Factorial of "<<n<<" is:"<<fact(n);
	return 0;
}