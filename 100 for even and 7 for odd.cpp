#include <iostream>

using namespace std;

int main()
{ 
   int number;
   cin>>number;
   int is_even = (number%2 == 0);
   int is_odd = 1 - is_even;
   cout<<100*is_even + 7 * is_odd;
    
   return 0;
}
