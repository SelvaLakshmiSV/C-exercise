#include <iostream>

using namespace std;

int main()
{ 
    int number,divisor;
    cin>>number>>divisor;
    cout<<number - ((number/divisor)*divisor);
    
   return 0;
}
