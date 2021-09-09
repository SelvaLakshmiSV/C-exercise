#include <iostream>

using namespace std;

int main()
{ 
   int number;
   cin>>number;
   int year,month,days;
   year = number / 360;
   number = number % 360;
   month = number / 30;
   days = number % 30;
   cout<<year<<" "<<month<<" "<<days;
   return 0;
   
}
