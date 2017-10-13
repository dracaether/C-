#include<iostream.h>
#include<conio.h>

// P3 Machine Problem #2: Sequencing
void main()
{
    int x=0, k=0, i=1;
    clrscr();

    cout<<"Erin Casseapey S. Parino"<<endl;
    cout<<"1BSIT-01"<<endl;

    // ask for input
    cout<<"Please enter a number to start the sequence: ";
    cin>>x;
    cout<<"How many number series do you want to display?: ";
    cin>>k;

    // process
    cout<<endl<<"SEQUENCE:"<<endl;
    cout<<x<<" ";
    while (i<k)
    {
        if (x % 2 == 0)
        {
            x=x/2;
            cout<<x<<" ";
            i++;
        }
        else
        {
            x=x*3+1;
            cout<<x<<" ";
            i++;
        }
    }

    getch();
}    