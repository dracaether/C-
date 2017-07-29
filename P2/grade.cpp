#include<iostream.h>
#include<conio.h>

void main()
{
    int grade=0;
    clrscr();
    

    cout<<"\nEnter your grade: ";
    cin>>grade;

    if (grade<74)
    {
        cout<<"OUT OF RANGE.";
    }
    else if ((grade>=75) && (grade<76))
    {
        cout<<grade<<" has a grade equivalent of 3.00.";
    }
    else if ((grade>=77) && (grade<79))
    {
        cout<<grade<<" has a grade equivalent of 2.75.";
    }
    else if ((grade>=80) && (grade<81))
    {
        cout<<grade<<" has a grade equivalent of 2.50.";
    }
    else if ((grade>=82) && (grade<84))
    {
        cout<<grade<<" has a grade equivalent of 2.25.";
    }
    else if ((grade>=85) && (grade<88))
    {
        cout<<grade<<" has a grade equivalent of 2.00.";
    }
    else if ((grade>=89) && (grade<91))
    {
        cout<<grade<<" has a grade equivalent of 1.75.";
    }
    else if ((grade>=92) && (grade<94))
    {
        cout<<grade<<" has a grade equivalent of 1.50.";
    }
    else if ((grade>=95) && (grade<97))
    {
        cout<<grade<<" has a grade equivalent of 1.25.";
    }
    else if ((grade>=98) && (grade<=100))
    {
        cout<<grade<<" has a grade equivalent of 1.00.";
    }
    getch();
}