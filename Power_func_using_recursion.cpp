#include<iostream>
using namespace std;

int power(int a, int n){

	if(n == 1)
		return a;

	return a * power(a, n-1);
}
int main(){

	int n,p;
	cout<<"Enter the number:";
	cin>>n;

	cout<<"Enter the power of number:";
	cin>>p;

	cout<<"Number to the power p is(5^3) : "<<power(n,p);

	return 0;
}