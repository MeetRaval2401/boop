#include<iostream.h>
#include<conio.h>
struct person
{
 char name[11];
 int age;
 int citizenship;
 };
  int main(){
   person p1;
   cout<<"enter full name:";
   cin.get(p1.name,11);
   cout<<"enter age;";
   cin>>p1.age;
   cout<<"enter citizenship:";
   cin>>p1.citizenship;
   cout<<"\n display person information ."<<endl;
   cout<<"name:"<<p1.name<<endl;
   cout<<"age:"<<p1.age<<endl;
   cout<<"citizenship:"<<p1.citizenship;
   return 0;
   }