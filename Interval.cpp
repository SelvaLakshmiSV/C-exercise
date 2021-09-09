#include<iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	int count = 0;
	int start,end;
	cin>>start>>end;
	count += start<num && end>num;
	cin>>start>>end;
	count += start<num && end>num;
	cin>>start>>end;
	count += start<num && end>num;
	cout<<count<<endl;

}
