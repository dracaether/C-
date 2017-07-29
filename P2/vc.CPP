#include<iostream.h>
#include<conio.h>

void main()
{
    char letter;
    clrscr();
   
    cout<<"\nPlease enter a letter: ";
    cin>>letter;

    if ((letter=='a') || (letter=='e') || (letter=='i') || (letter=='o') || (letter=='u') || (letter=='A') || (letter=='E') || (letter=='I') || (letter=='O') || (letter=='U'))
    {
        cout<<"\n"<<letter<<" is a vowel.";
    }
    else
    {
        cout<<"\n"<<letter<<" is a consonant.";
    }
    getch();
}