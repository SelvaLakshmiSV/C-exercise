#include<iostream>
using namespace std;

int main() {
	int cnt, result = 0, num;
	cin>>cnt;
    cin>>num;
    cnt-=1;
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    if(cnt>0){cnt--;cin>>num;if(result<num) result = num;} 
    cout<<"    "<<result<<"     ";
	return 0;
}

