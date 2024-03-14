#include<iostream.h>
#include<conio.h>
int a=10; //global x
 int main()
 {
  clrscr();
  int x=10;
  cout<<"the global  x is" <<::a;
  cout<<"\n the local x is"<<a;
  getch();
  return 0;
  }



