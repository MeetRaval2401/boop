#include<iostream.h>
#include<conio.h>

 class employee
 {
  int id;
  char name[30];
  public:
  void getdata();
  void putdata();
  };
   void employee::getdata(){
   cout<<"Enter Id  :";
   cin>>id;
   cout<<"Enter name :";
   cin>>name;
   }
    void employee::putdata(){
    cout<<id<<" ";
    cout<<name<<" ";
    cout<<endl;
    }
     int main(){
     clrscr();
    int n,i;
    cout<<"Enter number of employees -";
    cin>>n;
     for(i=0;i<n;i++)
     emp[i].getdata();
      cout<<"employee Data -"<<endl;
      for(i=0;i<n;i++)
      emp[i].putdata();
      }
      getch();
      return 0;
      }