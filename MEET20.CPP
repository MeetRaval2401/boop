#include<iostream.h>
#include<conio.h>
 enum week{sunday,monday,tuesday,wednesday,thrusday,friday,saturday};
  int main()
  {
  clrscr();
    week today;
    today=wednesday;
    cout<<"day"<<today+1;

    getch();
    return 0;
    }