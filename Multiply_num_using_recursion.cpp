#include<iostream>
using namespace std;

int multiply(int a, int b){

	if(b == 0)
		return 0;
	if(b == 1)
		return a;

	//recursive case..
	 return a + multiply(a,b-1);
}

int main(){

	int a, b;

	cout<<"Enter the number(A):";
	cin>>a;

	cout<<"Enter the number of times u want to multiply numbers(B):";
	cin>>b;

	cout<<"A * B using recursion is:"<< multiply(a,b);
	return 0;
}