#include <iostream>

using namespace std;

int main()
{ 
  int number1,number2;
  cin>>number1>>number2;
  bool is_odd = number1 % 2 != 0 && number2 % 2 != 0;
  bool is_even =  number1 % 2 ==0 && number2 % 2 == 0;
  bool first_is_odd = number1 % 2 != 0 && number2 % 2 == 0;
  bool first_is_even = number1 % 2 == 0 && number2 % 2 == 0;
  if(is_odd)
     cout<<number1*number2;
  else if(is_even)
     cout<<double(number1) /double(number2);
  else if(first_is_odd)
     cout<<number1+number2;
   else
     cout<<number1 - number2;
   
   return 0;
}
