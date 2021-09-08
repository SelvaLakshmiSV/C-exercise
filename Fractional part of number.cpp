#include <iostream>

using namespace std;

int main()
{ 
    double num1,num2,num,rnum;
    cin>>num1>>num2;
    num = num1/num2;
    rnum = num - int(num);
    cout<<rnum<<endl;
    
   return 0;
}
