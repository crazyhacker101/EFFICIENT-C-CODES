#include<iostream>
using namespace std;

int fibo(int n){

	//Base case.
	if(n == 0 or n == 1)
		return n;

	//Recursive Case..
	return fibo(n-1)+fibo(n-2);
}
int main(){

	int n;

	cout<<"Enter the nth term of fibonaaci sequence u want to find out:";
	cin>>n;

	cout<<n<<"th term of fibonaaci sequence is(index starting from 0):"<<fibo(n);
	return 0;
}