#include<iostream>
using namespace std;

int main() {
	int num1,num2,temp,num3,temp2;
	cin>>num1>>num2>>num3;
	temp = num1;
	num1 = num2;
	num2 = temp;
	temp2 = num2;
	num2 = num3;
	num3 = temp2;
	
	cout<<num1<<" "<<num2<<" "<<num3;
	return 0;
}

