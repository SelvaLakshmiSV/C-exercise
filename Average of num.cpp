#include <iostream>

using namespace std;

int main()
{ 
   double num1,num2,num3,num4,num5;
   cin>>num1>>num2>>num3>>num4>>num5;
   double sum = num1+num2+num3+num4+num5;
   double avg1 = sum / 5;
   cout<<avg1<<endl;
   double sum1 = num1 + num2 + num3;
   double avg2 = sum1 / 3;
   double sum2 = num4 + num5;
   double avg3 = sum2 / 2;
   cout<<sum1/sum2<<endl;
   cout<<avg2/avg3;
   
   
   
   return 0;
}
