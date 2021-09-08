#include<iostream>
using namespace std;

int main(){
   int id1,id2;
   float grade1,grade2;
   string name1,name2;
   cout<<"What is student 1 name: ";
   cin>>name1;
   cout<<"His id :";
   cin>>id1;
   cout<<"His grade";
   cin>>grade1;
   cout<<"What is student 2 name: ";
   cin>>name2;
   cout<<"His id :";
   cin>>id2;
   cout<<"His grade";
   cin>>grade2;
   cout<<"Student grade in math \n"<<name1<<"(with id "<<id1<<") got grade "
   <<grade1<<endl<<name2<<"(with id "<<id2<<") got grade "<<grade2<<endl;
   cout<<"Average grade is "<<(grade1+grade2)/2;
   return 0;
}






