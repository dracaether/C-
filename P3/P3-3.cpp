#include<iostream.h>
#include<conio.h>

// P3 Machine Problem #3: Prime Number range
void main()
{
    int x=0, y=0, i=0, temp=0;
    clrscr();

    cout<<"Erin Casseapey S. Parino"<<endl;
    cout<<"1BSIT-01"<<endl;

    // inputs
    cout<<"Please enter a starting point: ";
    cin>>x;
    cout<<"Please enter the end point: ";
    cin>>y; 

    // checking
    while (x>y)
    {
        cout<<"Input invalid. \nStarting number shouldn't be higher than the end point. Try again.\n";
        cout<<"Please enter a starting point: ";
        cin>>x;
        cout<<"Please enter the end point: ";
        cin>>y;
    }

    while (x==y)
    {
        cout<<"Input invalid. \nStarting number shouldn't be the same with the end point. Try again.\n";
        cout<<"Please enter a starting point: ";
        cin>>x;
        cout<<"Please enter the end point: ";
        cin>>y;
    }

    while (x==1 || y==1)
    {
        cout<<"Input invalid. \nThe number(s) should be higher than 1. Try again.\n";
        cout<<"Please enter a starting point: ";
        cin>>x;
        cout<<"Please enter the end point: ";
        cin>>y;
    }

    // process
    cout<<endl<<"RANGE:"<<endl;
    if ((x/1==x) && (x/x==1))
    {
        cout<<x<<" ";
    }
    x=x+1;
    i=x;
    while (i<y)
    {
        if ((x%2==0) ||(x%3==0) || (x%4==0)||(x%5==0)||(x%6==0)||(x%7==0)||(x%8==0)||(x%9==0))
        {
            x++;
            i++;
        }
        else if ((x/1==x) && (x/x==1))
        {
            cout<<x<<" ";
            i++;
            x++;
        }
        
    }

    if ((y/1==y) && (y/y==1))
    {
        cout<<y<<" ";
    }
    getch();
}