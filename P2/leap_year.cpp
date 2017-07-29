#include<iostream.h>
#include<conio.h>

void main()
{
    int year=0;
    clrscr();
  

    cout<<"\nEnter a year: ";
    cin>>year;
    int data1=year%400;
    int data2=year%100;
    int data3=year%4;

    if (data1==0)
    {
        cout<<year<<" is a leap year.";
    }
    else if (data2==0)
    {
        cout<<year<<" is not a leap year.";
    }
    else if (data3==0)
    {
        cout<<year<<" is a leap year.";
    }
    else
    {
        cout<<year<<" is not a leap year.";
    }
    getch();
}